#include<stdio.h>
void result(int);
void main()
{
	int mark;
	printf("enter the marks");
	scanf("%d",&mark);
  result(mark);
}
void result(int marks)
{
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