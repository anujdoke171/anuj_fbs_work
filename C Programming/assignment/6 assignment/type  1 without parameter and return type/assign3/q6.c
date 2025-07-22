void factorial();
void main()
{
	factorial();
}
void factorial()
{
	int no=5;
	int i=1,fact=1;
	while(i<=no)
	{
		fact=fact*i;
		i++;
	}
	printf("the factorial of %d is %d",no,fact);
}