void strong(int,int,int,int);
void main()
{
	int no;
	printf("enter the number");
	scanf("%d",&no);
	int rem,sum=0,temp=no;
	strong(no,rem,sum,temp);
}
void strong(int no,int rem,int sum,int temp)
{
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