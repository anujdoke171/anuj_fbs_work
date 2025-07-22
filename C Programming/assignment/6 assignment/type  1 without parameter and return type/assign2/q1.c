#include<stdio.h>
void operator();
void main()
{
	operator();
}
void operator()
{
	int no1,no2,no;
	char ch;
	printf("enter the 1 numbers");
	scanf("%d",&no1);
	fflush(stdin);
	printf("enter the operator");
	scanf("%c",&ch);
	fflush(stdin);
	printf("enter  the 2 number");
	scanf("%d",&no2);
	if(ch=='+')
	{
		no=no1+no2;
	}
	else if(ch=='-')
	{
		no=no1-no2;
	}
	else if(ch=='*')
	{
		no=no1*no2;
	}
	else if(ch=='/')
	{
		no=no1/no2;
	}
	else
	{
		no=no1%no2;
	}
	printf("total result is %d",no);
	
}