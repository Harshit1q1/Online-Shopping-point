#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cartcalc
{
    int totalCost;
    int incartid[50];
    int incartprice[50];
    char incartname[50][30];
} cart0;

static int mark=0;

void productmenu()
{
    printf("\nSelect an option from the menu : ");
    printf("\n1. Laptops");
    printf("\n2. Mobiles");
    printf("\n3. Headphones");
    printf("\n4. Computer Accessories");
    printf("\n5. Mobile Accessories");
    printf("\n6. To Open Cart");
    printf("\n7. To Checkout and Exit");
}

void addtocart(int t, char nm[], int q)
{
    cart0.incartid[mark] = t;
    cart0.incartprice[mark] = q;
    strcpy(cart0.incartname[mark], nm);
    mark++;
}

void cart(char nm[])
{
    printf("\n--------------------%s's CART-------------------", nm);

    for(int i=0; i<mark; i++)
        printf("\nId=%d %s-> %d", cart0.incartid[i], cart0.incartname[i], cart0.incartprice[i]);
    
    printf("\n\nTotal Cost : %d\n", cart0.totalCost);
    
    if(mark==0)
        printf("\nCart is Empty!!\n\n");
}

void editcart(char nm[])
{
    printf("\n--------------------%s's CART-------------------", nm);
    for(int i=0; i<mark; i++)
        printf("\nId=%d %s-> %d", cart0.incartid[i], cart0.incartname[i], cart0.incartprice[i]);

    printf("\n\nTotal Cost : %d\n\n", cart0.totalCost);

    int ch, ch2, test=-1;

    if(mark==0)
        printf("\nCart is Empty!!\n\n");
    else
    {
        printf("To Remove Any Item From Cart Press 1");
        printf("\nTo Close Cart Press 0");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        if(ch==1)
        {
            printf("\n\nTo Remove Any Item Enter Id of Item : ");
            scanf("%d", &ch2);

            for(int i=0; i<mark; i++)
                if(ch2 == cart0.incartid[i])
                    test=i;
            
            if(test != -1)
            {
                cart0.totalCost -= cart0.incartprice[test];
                mark--;
                printf("%s Removed Successfully!\n\n", cart0.incartname[test]);
                for(int j=test; j<mark; j++)
                {
                    cart0.incartid[j] = cart0.incartid[j+1];
                    cart0.incartprice[j] = cart0.incartprice[j+1];
                    strcpy(cart0.incartname[j], cart0.incartname[j+1]);
                }
            }
            else
                printf("\nNo item found!!\n\n");
        }
    }
}

void buylaptop()
{
    char laptops[9][30] = {"Dell Inspiron 3000","HP Pavilion x360","Dell G5 SE",
    "Asus TUF Gaming","Lenovo Legion","Acer Aspire 7","Acer Nitro 5",
    "Apple Macbook Air","HP 15s"};
    int priceLaptops[9] = {41900,68300,92900,64990,89890,49990,65990,122990,62500};
    int id[9], checkid = -1, p;

    printf("\n\n--------------------Laptops(->Price)-------------------");
    for(int i=0; i<9; i++)
    {
        id[i] = i+1;
        printf("\nId=%d %s -> %d", id[i], laptops[i], priceLaptops[i]);
    }

    printf("\n\nWhich laptop do you want to buy (Enter Id): ");
    scanf("%d", &checkid);
    
    for(p=0; p<9; p++)
        if(id[p] == checkid)
            break;

    if(p<9)
    {
        printf("\n%s is added to cart!\n\n", laptops[p]);
        cart0.totalCost += priceLaptops[p];
        addtocart(id[p], laptops[p], priceLaptops[p]);
    }
    else
        printf("\nNo item found!!\n\n");
}

void buymobile()
{
    char mobiles[9][30] = {"MI Note 10T Pro","Realme X3 Superzoom","Motorola Edge",
    "Asus Rog 3","Poco X2","Vivo V20","IPhone 12 Max Pro","Nokia 5.3",
    "OnePlus Nord Pro 5G"};
    int priceMobiles[9] = {49999,28999,64999,46999,16999,24990,119900,13999,29999};
    int id[9], checkid = -1, p;

    printf("\n\n--------------------Mobiles(->Price)-------------------");
    for(int i=0; i<9; i++)
    {
        id[i] = i+10;
        printf("\nId=%d %s -> %d", id[i], mobiles[i], priceMobiles[i]);
    }

    printf("\n\nWhich mobile do you want to buy (Enter Id): ");
    scanf("%d", &checkid);

    for(p=0; p<9; p++)
        if(id[p] == checkid)
            break;
    
    if(p<9)
    {
        printf("\n%s is added to cart!\n\n", mobiles[p]);
        cart0.totalCost += priceMobiles[p];
        addtocart(id[p], mobiles[p], priceMobiles[p]);
    }
    else
        printf("\nNo item found!!\n\n");
}

void buyheadphone()
{
    char headphones[9][30] = {"Philips SHP1900","Sony MDR-7506","Sennheiser HD 180",
    "Sony MDR-XB450AP","iBall EarWear Rock","Senheiser HD 206","Samson CH700",
    "Samson SR850","Panasonic RP-HT16"};
    int priceHeadphones[9] = {699,8790,2585,2250,887,999,1490,3735,3384};
    int id[9], checkid = -1, p;

    printf("\n\n--------------------Headphones(->Price)-------------------");
    for(int i=0; i<9; i++)
    {
        id[i] = i+19;
        printf("\nId=%d %s -> %d", id[i], headphones[i], priceHeadphones[i]);
    }

    printf("\n\nWhich headphone do you want to buy (Enter Id): ");
    scanf("%d", &checkid);

    for(p=0; p<9; p++)
        if(id[p]==checkid)
            break;
    
    if(p<9)
    {
        printf("\n%s is added to cart!\n\n", headphones[p]);
        cart0.totalCost += priceHeadphones[p];
        addtocart(id[p], headphones[p], priceHeadphones[p]);
    }
    else
        printf("\nNo item found!!\n\n");
}

void buycompaccessory()
{
    char compaccs[9][30] = {"TP-Link Wifi Range Extender","Monitor Cable(DVI)","USB Hub QHL",
    "Monitor Cable","Card Reader","Blue-tooth Vista Ready","Logitech M-171 Mouse",
    "HP C2500 Keyboard and Mouse","1 TB Hard Disk"};
    int priceCompaccs[9] = {1200,150,55,125,350,160,825,790,2000};
    int id[9], checkid = -1, p;

    printf("\n\n--------------------Computer Accessories(->Price)-------------------");
    for(int i=0; i<9; i++)
    {
        id[i] = i+28;
        printf("\nId=%d %s -> %d", id[i], compaccs[i], priceCompaccs[i]);
    }

    printf("\n\nWhich Computer Accessory do you want to buy (Enter Id): ");
    scanf("%d", &checkid);

    for(p=0; p<9; p++)
        if(id[p] == checkid)
            break;

    if(p<9)
    {
        printf("\n%s is added to cart!\n\n", compaccs[p]);
        cart0.totalCost += priceCompaccs[p];
        addtocart(id[p], compaccs[p], priceCompaccs[p]);
    }
    else
        printf("\nNo item found!!\n\n");
}

void buymobileaccessory()
{
    char mobileaccs[9][30] = {"MI 3i 10000 mAh PowerBank","iBall 10000 mAh PowerBank",
    "boAt USB cable","Backcover for Poco X2","Tempered Glass for Poco X2","Backcover for Vivo V20",
    "Tempered Glass for Poco F1","Mi USB cable","Ambrane USB Cable"};
    int priceMobileaccs[9] = {799,499,129,259,189,229,329,149,89};
    int id[9], checkid = -1, p;

    printf("\n\n--------------------Mobile Accessories(->Price)-------------------");
    for(int i=0; i<9; i++)
    {
        id[i] = i+37;
        printf("\nId=%d %s -> %d", id[i], mobileaccs[i], priceMobileaccs[i]);
    }

    printf("\n\nWhich Mobile Accessory do you want to buy (Enter Id): ");
    scanf("%d", &checkid);

    for(p=0; p<9; p++)
        if(id[p] == checkid)
            break;
    
    if(p<9)
    {
        printf("\n%s is added to cart.\n\n", mobileaccs[p]);
        cart0.totalCost += priceMobileaccs[p];
        addtocart(id[p], mobileaccs[p], priceMobileaccs[p]);
    }
    else
        printf("\nNo item found!!\n\n");
}

void main()
{
	int choice;
	char name[50];
	printf("Please Enter Your Name : ");
	gets(name);

    printf("\n-----------------------------------------------------------");
    printf("\n--------------------PRIME SHOPPING POINT-------------------");
    printf("\n-----------------------------------------------------------\n");

	printf("\nHello %s, Welcome to Prime Shopping Point.\n",name);

	while(1)
	{
	    productmenu();
	    printf("\nEnter Your Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1: buylaptop();
                break;
        case 2: buymobile();
                break;
        case 3: buyheadphone();
                break;
        case 4: buycompaccessory();
                break;
        case 5: buymobileaccessory();
                break;
        case 6: editcart(name);
                break;
        case 7: cart(name);
                printf("\n-----------Your Final Bill is %d.-----------\n", cart0.totalCost);
                printf("Thanks %s for Choosing Us and Visit us again.\n\n", name);
                exit(0);
                break;
        default:printf("\nENTER VALID CHOICE!!\n");
                break;
        }
	}
}
