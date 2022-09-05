# Online-Shopping-point

![GitHub](https://img.shields.io/github/license/Harshit1q1/Online-Shopping-point)
![GitHub contributors](https://img.shields.io/github/contributors/Harshit1q1/Online-Shopping-point)


## Usage

This menu driven program written in C simulates Prime Shopping Point, which sells laptops, mobiles, headphones and 
accesories for mobile and computer. Data of products is stored in arrays with distinct id for each product.



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

On selecting checkout option, bill is generated along with items printed on screen.

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
[MIT](https://choosealicense.com/licenses/mit/)
