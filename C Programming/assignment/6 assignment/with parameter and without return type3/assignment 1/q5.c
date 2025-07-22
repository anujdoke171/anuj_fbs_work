void personvote(vote);
void main()
{
	int age;
	printf("enter the age");
	scanf("%d",&age);
	personvote(age);
}
void personvote(int y)
{
	if(y>=18)
	{
		printf("the person is eligible to vote");
	}
	else
	{
		printf("the person is not eligible to vote");
	}
	
	
}