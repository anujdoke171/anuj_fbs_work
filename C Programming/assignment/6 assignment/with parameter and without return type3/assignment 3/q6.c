void factorial(int,int,int);
void main()
{
	int no;
	printf("enter the number");
	scanf("%d",&no);
	int i=1,fact=1;
	factorial(no,i,fact);
}
void factorial(int no,int i,int fact)
{
	while(i<=no)
	{
		fact=fact*i;
		i++;
	}
	printf("the factorial of %d is %d",no,fact);
}