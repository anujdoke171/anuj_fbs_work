int prime();
void main()
{
	int res=prime();
	if(res==0)
	printf("no is not prime");
	else if(res==1)
	printf("no is  prime");
	else
	printf("no number");
}
int prime()
{
	int no=97; int i=2,flag=1;
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
		return 0;
	}
	else
	{
		return 1;
	}
}