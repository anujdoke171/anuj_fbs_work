void main()
{
	int no=153,r1,rev=0;
	 int temp=no;
	while(no>0)
	{
		r1=no%10;
		rev=rev+r1*r1*r1;
		no=no/10;
	}
	if(rev==temp)
	{
		printf("number is armstrong");
	}
	else
	{
		printf("number is not armstrong");
	}
}