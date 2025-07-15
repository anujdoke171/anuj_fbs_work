void main()
{
	int no=6577,r1,sum=0,ld;
	ld=no%10;
	while(no>0)
	{
		r1=no%10;
		no=no/10;
	}
	printf("the addition is %d",ld+r1);
}