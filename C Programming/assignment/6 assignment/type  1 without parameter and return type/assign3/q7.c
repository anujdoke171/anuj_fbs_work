void strong();
void main()
{
	strong();
}
void strong()
{
	int no=14,rem,sum=0;
	int temp=no;
	while(no>=1)
	{
	    rem=no%10;
		sum=sum+rem;
		no=no/10;
	}
	if(sum==temp)
	{
		printf("the number is strong");
	}
	else
	{
		printf("the number is not strong");
	}
}