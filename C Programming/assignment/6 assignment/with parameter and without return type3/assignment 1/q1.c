#include<stdio.h>
void evenodd(int);
void main()
{
	int no;
	printf("enter the number");
	scanf("%d",&no);
	evenodd(no);
}
void evenodd (int no1)
{
	
		if(no1%2==0)
	{
		printf("the number is even");
	}
	else
	{
		printf("the number is odd");
	}
	
}