#include<stdio.h>
void price();
void main()
{
	price();
}
void price()
{
	double price;
	char choice;
	printf("enter price");
	scanf("%lf",&price);
	fflush(stdin);
	printf("are you student y or n");
	scanf("%c",&choice);
	double totalprice;
	if(choice=='y')
	{
		if(price>500)
		totalprice=price-price*0.20;
		else
		totalprice=price-price*0.10;
	}
	else
	{
		if(price>600)
		totalprice=price-price*0.15;
		else
		totalprice=price;
	}
	printf("total price is%lf",totalprice);
	
}