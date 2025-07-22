#include<stdio.h>
void palindrome(int);
void main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	palindrome(num);
}
void palindrome(int no)
{
	int r1,r2,r3,q1,rev;
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	r3=q1/10;
	rev=r1*100+r2*10+r3;
	if(rev==no)
	{
		printf("the number is palindrome");
	}
	else
	{
		printf("the number is not palindrome");
	}
}

