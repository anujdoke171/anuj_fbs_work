#include<stdio.h>
int price();
void main()
{
	int res=price();
	if(res==1)
	printf("total price is" );
	else if(res==2)
	printf("total price is");
	else if(res==3)
	printf("total price is");
	else
	printf("total price is");
	
}
int price()
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
		return 1
		else
		return 2;
	}
	else
	{
		if(price>600)
		return 3;
		else
		return 4;
	}
	printf("total price is%lf",totalprice);
	
}