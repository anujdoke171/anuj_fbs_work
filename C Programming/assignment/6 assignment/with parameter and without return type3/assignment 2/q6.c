#include<stdio.h>
void year(int);
void main()
{
	int age;
	printf("enter the age");
	scanf("%d",&age);
	year(age);
}
void year(int age)
{
	if(age<12)
	{
		printf("the child");
	}
	else if(age<19)
	{
		printf("the teenager");
	}
	else if(age<59)
	{
		printf("the adult");
	}
	else
	printf("the senior");
}