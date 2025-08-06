#include<stdio.h>
#include<string.h>
char* mystrcpy(char*,char*);
void main()
{
	char str[]="virat";
	char ptr[10];
	mystrcpy(ptr,str);
}
char* mystrcpy(char*dest,char*src)
{
	int i=0;
	while(src[i]!='\0')
	{
		dest[i]=src[i];
		i++;
	}
	dest[i]='\0';
	printf("%ch",dest);
	return dest;
}

