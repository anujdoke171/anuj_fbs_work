void main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	int r1,r2,r3,q1,rev;
	r1=num%10;
	q1=num/10;
	r2=q1%10;
	r3=q1/10;
	rev=r1*100+r2*10+r3;
	if(rev==num)
	{
		printf("the number is palindrome");
	}
	else
	{
		printf("the number is not palindrome");
	}
	
	
}