void main()
{
	int no=123456,sum=0,r1;
	while(no>0)
	{
		r1=no%10;
		sum=sum+r1;
		no=no/10;
	}
	printf("the sum is %d",sum);
	
}