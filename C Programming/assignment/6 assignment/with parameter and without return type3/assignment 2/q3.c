void greatest(int,int,int);
void main()
{
	int no1,no2,no3;
	printf("enter the 1 number");
	scanf("%d",&no1);
	printf("enter the 2 number");
	scanf("%d",&no2);
	printf("enter the 3 number");
	scanf("%d",&no3);
	greatest(no1,no2,no3);
}
void greatest(int no1,int no2,int no3)
{
	if(no1>no2)
	{
		if(no1>no3)
		printf("the no1 is greater");
		else
		printf("the no3 is greater");
	}
	else
	{
		if(no2>no3)
		printf("the no2 is greater");
		else
		printf("the no3 is greater");
		
		
	}
}