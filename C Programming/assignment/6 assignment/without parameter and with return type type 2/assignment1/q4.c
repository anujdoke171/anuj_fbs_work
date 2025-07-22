#include<stdio.h>
int character();
void main()
{
	  if(character())
	  printf("character is vowel");
	  else
	  printf("character is consonant");
}
int character()
{
	char ch;
	printf("enter the character");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
