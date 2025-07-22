int uppercase();
void main()
{
	if(uppercase())
	printf("the uppercase");
	else
	printf("the lowercase");
}
int  uppercase()
{
	char ch='i';
	if(ch>='A'&&ch<='a')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}