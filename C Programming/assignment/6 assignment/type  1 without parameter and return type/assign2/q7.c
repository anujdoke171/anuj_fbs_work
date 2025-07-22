void age();
void main()
{
	age();
}
void age()
{
	int age=11;
	if(age<12)
	{
		printf("the child");
	}
	else if(age<19)
	{
		printf("the teenager");
	}
	else if(age<59)
	{
		printf("the adult");
	}
	else
	printf("the senior");
}