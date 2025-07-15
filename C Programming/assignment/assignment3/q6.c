void main()
{
	int num=28,sum=0,i=1;
	while(i<num)
	{
		if(num%i==0)
		sum=sum+i;
		i++;
	}
	if(sum==num)
	printf(" %d is the  perfect number",num);
	else
	printf("%d is the  not perfect number",num);
	
}