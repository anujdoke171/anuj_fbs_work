void uppercase(char);
void main()
{
	char character;
	printf("enter the character");
	scanf("%c",&character);
	uppercase(character);
}
void uppercase(char x)
{
	if(x>='A'&&x<='a')
	{
		printf("the character is in uppercase");
	}
	else
	{
		printf("the character is in lowercase");
	}
}