#include<stdio.h>
int greatest();
void main()
{
	 int res=greatest();
	 if(res==1)
	 printf("no 1 is greater");
	 else if(res==2)
	 printf("no 2 is greater");
     else
     printf("no 3 is greater");
}
int greatest()
{
	int no1,no2,no3;
	printf("enter the 1 number");
	scanf("%d",&no1);
	printf("enter the 2 number");
	scanf("%d",&no2);
	printf("enter the 3 number");
	scanf("%d",&no3);
	if(no1>no2)
	{
		if(no1>no3)
		return 1;
		else
		return 3;
	}
	else
	{
		if(no2>no3)
		return 2;
		else
		return 3;
		
		
	}
}