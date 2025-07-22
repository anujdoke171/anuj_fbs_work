#include<stdio.h>
#include<stdio.h>
char*mystrrev(char*,char*);
void main()
{
	char str[]="hellofirst";
	char ptr[10];
	mystrrev(ptr,str);
}
char*mystrrev(char*dest,char*src)
{
	int len=strlen(src);
	int i=0;
	for(i=0;i<len;i++)
	{
		dest[i]=src[len-1-i];
	}
	dest[i]='\0';
		printf("%s",dest);
	return dest;
}
	
	
