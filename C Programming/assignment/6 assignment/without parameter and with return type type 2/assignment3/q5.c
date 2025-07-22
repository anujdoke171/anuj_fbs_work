int palindrome();
void main()
{
	int res=palindrome();
	if(res==1)
	printf("no is palindrome");
	else
	printf("no is not palindrome");
}
int palindrome()
{
	int no=2668,r1,rev=0;
	 int temp=no;
	while(no>0)
	{
		r1=no%10;
		rev=rev*10+r1;
		no=no/10;
	}
	if(rev==temp)
	{
		return 1;
	}
	else
	{
		return 2;
	}
}