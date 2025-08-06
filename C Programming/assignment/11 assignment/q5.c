#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="'a','b','e','d','i','o'";
	int count=0;
	for(int i=0;i<str[i];i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		count++;
	}
	printf("%d",count);
}