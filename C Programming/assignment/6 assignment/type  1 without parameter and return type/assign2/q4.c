#include<stdio.h>
void result();
void main()
{
  result();
}
void result()
{
	int marks;
	printf("enter the marks");
	scanf("%d",&marks);
	if(marks>=75)
	printf("result is dstinction");
	else if(marks>=65)
	printf("result is first class");
   else if(marks>=55)
	printf("result is second class");
	else if(marks>=40)
	printf("result is pass class");
	else
	printf("result is fail");
}