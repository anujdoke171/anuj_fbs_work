#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="firstbit";
	char b[]="solution";
	int i=0;
	char ch[10];
	printf("a is %s",a);
	printf("\nb is %s",b);
	int str=strcmp(a,b);
	if(str<0)
	printf("\n%s comes before %s", a, b);
	else if(str==0)
	printf("\n%s equals %s", a, b);
	else
	printf("\n%s comes before %s", a, b);
		
}