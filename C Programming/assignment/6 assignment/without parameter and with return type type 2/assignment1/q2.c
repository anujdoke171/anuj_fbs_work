#include<stdio.h>
int palindrome();
void main()
{
	if(palindrome())
	printf("palindrome");
	else
	printf("not palindrome");
}
int palindrome()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	int r1,r2,r3,q1,rev;
	r1=num%10;
	q1=num/10;
	r2=q1%10;
	r3=q1/10;
	rev=r1*100+r2*10+r3;
	if(rev==num)
	{
	    return 1;
	}
	else
	{
		return 0;
	}
	
}
