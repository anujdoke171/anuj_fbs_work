#include<stdio.h>
int operator();
void main()
{
	int res=operator();
	if(res==1)
	printf("addtion is%d",res);
}
int operator()
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
		return 1;
	}
	else if(ch=='-')
	{
		no=no1-no2;
		return 2;
	}
	else if(ch=='*')
	{
		no=no1*no2;
		return 3;
	}
	else if(ch=='/')
	{
		no=no1/no2;
		return 4;
	}
	else
	{
		no=no1%no2;
		return 5;
	}
	printf("total result is %d",no);
	
}