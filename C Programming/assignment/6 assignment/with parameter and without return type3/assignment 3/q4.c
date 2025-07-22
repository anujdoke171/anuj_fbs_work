#include<stdio.h>
void armstrong(int,int,int,int);
void main()
{
	int no,r1,rev=0;
	printf("enter the number");
	scanf("%d",&no);
	 int temp=no;
	armstrong(no,r1,rev,temp);
}
void armstrong(int x,int r1,int rev,int temp)
{
	while(x>0)
	{
		r1=x%10;
		rev=rev+r1*r1*r1;
		x=x/10;
	}
	if(rev==temp)
	{
		printf("number is armstrong");
	}
	else
	printf("number is not armstrong");
	
	
}
	
	
