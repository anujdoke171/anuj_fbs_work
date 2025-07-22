#include<stdio.h>
void character(char);
void main()
{
	char ch;
	printf("enter the character");
	scanf("%c",&ch);
	character(ch);
}
void character(char ch)
{
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("the character is vowel");
	}
	else
	{
		printf("the character is consonant");
	}
}
