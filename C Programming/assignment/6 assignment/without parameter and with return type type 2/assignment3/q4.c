int strong();
void main()
{
	int res=strong();
	if(res==2)
	printf("no is strong");
	else
	printf("no is not strong");
}
int strong()
{
	int no=145,rem,sum=0;
	int temp=no;
	while(no>=1)
	{
	    rem=no%10;
		sum=sum+rem;
		no=no/10;
	}
	if(sum==temp)
	{
		return 1;
	}
	else
	{
	    return 2;
	}
}