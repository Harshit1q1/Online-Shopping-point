# Online-Shopping-point

![GitHub](https://img.shields.io/github/license/Harshit1q1/Online-Shopping-point)
![GitHub contributors](https://img.shields.io/github/contributors/Harshit1q1/Online-Shopping-point)


## Usage

This menu driven program written in C simulates Prime Shopping Point, which sells laptops, mobiles, headphones and 
accesories for mobile and computer. Data of products is stored in arrays with distinct id for each product.

On executing the program, User will be asked to enter his/her name and this name will be displayed with welcome message.<br/>

![image1](https://user-images.githubusercontent.com/77769935/188385234-b90afad0-1307-4a3a-8da6-30c2a48294e6.png)

This program also provides cart facility. User can view, edit and update cart using functions accordingly.
For cart manipulation, c structure is used to initiate a cart with productids, price, name and totalcost.

```c
struct cartcalc
{
    int totalCost;
    int incartid[50];
    int incartprice[50];
    char incartname[50][30];
} cart0;
```

Now, User adds Sony MDR-7506 headphones to the cart.

![image2](https://user-images.githubusercontent.com/77769935/188385392-18086437-72d7-4f9c-a168-1f11b4877d1c.png)

On selecting checkout and exit, the cart will be printed along with bill.

![image3](https://user-images.githubusercontent.com/77769935/188385424-1f895c0e-3b6d-41fa-80be-263905b8bfbe.png)

On selecting checkout option, bill is generated along with items printed on screen. We can repeat the same process 
for different user and every time bill will be generated accordingly!

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
[MIT](https://choosealicense.com/licenses/mit/)
