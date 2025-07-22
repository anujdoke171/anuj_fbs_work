#include<stdio.h>
int evenodd(int);
void main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	int res=evenodd(num);
	if(res==1)
	printf("number is even");
	else
	printf("number os odd");
}
int evenodd(x)
{
	
		if(x%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}