int personvote();
void main()
{
	if(personvote())
	printf("the person is eligible to vote");
	else
	printf("the person not is eligible to vote");
}
int personvote()
{
	int age=19;
	if(age>=18)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
	
}