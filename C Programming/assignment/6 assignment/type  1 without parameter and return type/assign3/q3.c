void prime();
void main()
{
	prime();
}
void prime()
{
	int no=9; int i=2,flag=1;
	while(i<no)
	{
		if(no%i==0)
		{
		flag=0;
		
	}
	i++;
}
	if(flag==0)
	{
		printf("the number is not prime");
	}
	else
	{
		printf("the number is prime");
	}
}