void main()
{
	int arr[]={121};
	int i,num,rev;
	for(i=0;i<3;i++)
	{
		num=arr[i];
		rev=0;
		while(num!=0)
		{
			rev=rev*10+num%10;
			num=num/10;
		}
		if(num==rev)
		{
			printf("number is pallindrome");
		}
		else
		{
			("number is not pallindrome");
		}
	}
}