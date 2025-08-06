#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="anujdoke";
	int i,count=0,flag=0;
	int len = strlen(str);
	for(i=0;i<str[i];i++)
	{
		if(str[i]!=" ")
		{
			if(flag==0)
			{
				count++;
				flag==1;
			}
			else
			flag=0;
		}
	}
	printf("Number of words: %d\n",count);
}