#include<stdio.h>
int result();
void main()
{
   int res = result();
   if(res==1)
   printf("distinction");
   else if(res==2)
   printf("first class");
   else if(res==3)
   printf("second class");
   else if(res==4)
   printf("pass class");
   else 
   printf("fail");
}
int result()
{
	int marks;
	printf("enter the marks");
	scanf("%d",&marks);
	if(marks>=75)
	return 1;
	else if(marks>=65)
	return 2;
   else if(marks>=55)
	return 3;
	else if(marks>=40)
	return 4;
	else
	return 5;
}