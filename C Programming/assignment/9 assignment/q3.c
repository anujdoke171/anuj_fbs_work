#include<stdio.h>
#include<string.h>
void main()
{
	char str[10]="firstbit";
	int i=0;
	char temp[10];
	printf("str is %s",str);
	strcpy(temp,str);
	printf("\n after copy");
	printf("\n temp is %s",temp);	
}