void main()
{
	int n=1;
	for(int i=1;i<=7;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("*");
		}
		(i<4)?n++:n--;
		printf("\n");
	}
}