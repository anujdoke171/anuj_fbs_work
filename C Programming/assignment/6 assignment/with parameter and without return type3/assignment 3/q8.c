#include<stdio.h>
void palindrome(int,int,int,int);
void main()
{
	int no;
	printf("enter the number");
	scanf("%d",&no);
	 int r1,rev=0,temp=no;
	palindrome(no,r1,rev,temp1);
}
void palindrome(int no,int r1,int rev,int temp)
{
	while(no>0)
	{
		r1=no%10;
		rev=rev*10+r1;
		no=no/10;
	}
	if(rev==temp)
	{
		printf("number is palindrome");
	}
	else
	{
		printf("number is not palindrome");
	}
}