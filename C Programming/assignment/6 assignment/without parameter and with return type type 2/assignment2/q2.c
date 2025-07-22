int triangle();
void main()
{
	int res=triangle();
	if(res==1)
	printf("triangle is equilateral");
	else if(res==2)
	printf("triangle is isosceles");
	else
	printf("triangle is scalane");
}
int triangle()
{
	int s1,s2,s3;
	printf("enter the 1 side");
	scanf("%d",&s1);
	printf("enter the 2 side");
	scanf("%d",&s2);
	printf("enter the 3 side");
	scanf("%d",&s3);
	if(s1==s2 && s2==s3)
	{
		return 1;
	}
	else if(s1==s2||s2==s3||s1==s3)
	{
		return 2;
	}
	else
	{
		return 3;
	}
	
}