int age();
void main()
{
	int res=age();
	if(res==1)
	printf("child");
	else if(res==2)
	printf("teenager");
	else if(res==3)
	printf("adult");
	else 
	printf("seniorand above");
}
int age()
{
     int age;
     printf("enter the age");
     scanf("%d",&age);
	if(age<12)
	{
	    return 1;
	}
	else if(age<19)
	{
		return 2;
	}
	else if(age<59)
	{
		return 3;
	}
	else
	return 4;
}
