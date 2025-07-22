int armstrong();
void main()
{
	int res=armstrong();
	if(res==0)
	printf("no is armstrong");
	else if(res==1)
	printf("no is not armstrong");
	else
	printf("no number");
}
int armstrong()
{
	int no=370,r1,rev=0;
	 int temp=no;
	while(no>0)
	{
		r1=no%10;
		rev=rev+r1*r1*r1;
		no=no/10;
	}
	if(rev==temp)
	{
		return 0;
	}
	else
	return 1;
	
	
}
	
	
