void main()
{
	char str="121";
	int i,j,n=3,count =0;
	for(i=0,j<=n-1;j>i;i++,j--)
	{
		if(count==0)
		{
			count++;
		}
	}
	if(count==1)
	printf("palindrome");
	else
	printf("not palindrome");
	
}