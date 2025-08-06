void main()
{
	for(int j=1;j<=10000;j++)
	{
	int no=1453;
	int temp=no,rem,sum;
	int count=0;
	while(no>0)
	{
		count++;
		no=no/10;
	}
	no=j;
	while(no>0)
	{
		rem=no%10;
		int res=1;
		for(int i=1;i<=count;i++)
		res=res+rem;
		sum=sum+res;
		no=no/10;
	}
	if(sum==j)
	{
		printf("%d",sum,j,temp,no,count);
	}
}
}