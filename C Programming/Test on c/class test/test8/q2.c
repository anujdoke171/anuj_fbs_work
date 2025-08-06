#include<stdio.h>
void main()
{
	char str[]="viratkohli";
	int i,temp,n=10;
	for(i=0;i<5;i++)
	{
		temp=str[i];
		str[i]=str[n-1-i];
		str[n-1-i]=temp;
	}
	printf("%s",str);
}