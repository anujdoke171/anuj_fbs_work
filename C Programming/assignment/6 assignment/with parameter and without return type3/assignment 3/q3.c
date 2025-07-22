void prime(int,int,int);
void main()
{
	int no=8; int i=2,flag=1;
	prime(no,i,flag);
}
void prime(int no,int i,int flag)
{
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