#include<stdio.h>
int leapyear(int year);
void main() 
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	int res=leapyear(year);
	if(res==1)
		printf("year is leap");
	else
		printf("not leap year");
}
int leapyear(int x) 
{
    if(x%4==0&&x%100!=0||x%400==0) 
		return 1;
	 else 
		return 0;
	
}
