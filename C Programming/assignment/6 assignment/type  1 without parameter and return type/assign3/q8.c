void palindrome();
void main()
{
	palindrome();
}
void palindrome()
{
	int no=121,r1,rev=0;
	 int temp=no;
	while(no>0)
	{
		r1=no%10;
		rev=rev*10+r1;
		no=no/10;
	}
	if(rev==temp)
	{
		printf("number is palindrome");
	}
	else
	{
		printf("number is not palindrome");
	}
}