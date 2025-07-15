void main()
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
		printf("the triangle is equilateral");
	}
	else if(s1==s2||s2==s3||s1==s3)
	{
		printf("the triangle is isosceles");
	}
	else
	{
		printf("the triangle is scalane");
	}
	
	

}