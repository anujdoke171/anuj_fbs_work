#include<string.h>
char*mystrchr(const char*str,char ch);
int main()
{
	char str[]="hello";
	char*ptr;
	int i=0;
	ptr=mystrchr(str,i);
	if(ptr!=NULL)
	printf("character are found");
	return 0;
}
char*mystrchr(const char*str,char ch)
{
	char*last=NULL;
	while(*str!='\0')
	{
		if(*str==ch)
		last=(char*)str;
		str++;
	}
     return last;
}