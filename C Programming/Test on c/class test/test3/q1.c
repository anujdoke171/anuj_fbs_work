void main()
{
	int starting=10 ,ending=20;
	printf("enter the starting number");
	scanf("%d",&starting);
	printf("enter the ending number");
	scanf("%d",&ending);
	while(starting<=ending)
	{
		if(starting%2==0)
		printf("\n even number is%d\n",starting);
		else 
		printf("\n odd number is%d\n",starting);
		starting++;
	}

	

}