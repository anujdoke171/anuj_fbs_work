void main()
{
	int arr[]={1,2,3,4,5};
	int no=6,pos=2,n=6;
	for(int i=n;i>=pos;i--)
    {
    	arr[i]=arr[arr[i]-1];
	}
	arr[pos]=no;
	n++;
	for(int i=0;i<6;i++)
	{
		printf("%d",arr[i]);
	
		
	}

	
}