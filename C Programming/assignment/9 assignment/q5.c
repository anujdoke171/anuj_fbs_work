#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="firstbit";
	char b[]="solution";
	printf("str is %s",a);
	printf("\nptr is %s",b);
	strcat(a,b);
	printf("\n after concat");
	printf("\n concat is %s",a,b);	
}