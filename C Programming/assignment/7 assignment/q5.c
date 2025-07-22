void main()
{
	int arr1[]={12,14,11,13,15};
	int arr2[]={16,17,18,19,20};
	int merged[10],n=10, i;
	for(i=0;i<5;i++)
	{
		merged[i]=arr1[i];
	}
	for(i=0;i<5;i++)
	{
		merged[i+5]=arr2[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d",merged[i]);	
	}
}