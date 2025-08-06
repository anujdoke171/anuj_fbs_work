#include<stdio.h>
struct Time
{
	int hours;
	int min;
	int sec;
};
struct Time storeTime();
 void displayTime(struct Time Tim);
 
void main()
{
	struct Time s1,s2,s3;
	s1=storeTime();
	s2=storeTime();
	s3=storeTime();
	
	
	
	displayTime(s1);
	displayTime(s2);
	displayTime(s3);
	
	
	
	
}
 void displayTime(struct Time Tim)
{
	printf("hours=%d,min=%d,sec=%d\n",Tim.hours,Tim.min,Tim.sec);
}
struct Time storeTime()
{
	struct Time Tim;
	printf("enter the hours,min,sec");
	scanf("%d",&Tim.hours);
	scanf("%d",&Tim.min);
	scanf("%d",&Tim.sec);
	
	return Tim;
}