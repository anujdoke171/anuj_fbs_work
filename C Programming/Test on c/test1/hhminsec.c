#include<stdio.h>
void main()
{
	int min,tsec,hours,sec;
	printf("enter hours");
	scanf("%d",&hours);
	printf("enter min");
	scanf("%d",&min);
	printf("enter sec");
	scanf("%d",&sec);
	tsec=hours*60*60+min*60+sec;
	printf("the total second is%d",tsec);
}