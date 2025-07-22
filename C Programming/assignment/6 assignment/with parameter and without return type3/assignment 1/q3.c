#include<stdio.h>
void leapyear(int);
void main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
  leapyear(year);
}
void leapyear(int year)
  {
	if(year%4==0&&year%100!=0||year%400==0)
	{
		printf("the year is leap year");
	}
	else
	{
		printf("the year is not leap year");
	}
}
