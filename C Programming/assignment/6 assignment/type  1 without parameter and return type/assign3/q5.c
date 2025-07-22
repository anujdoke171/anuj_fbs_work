void perfect();
void main()
{
	perfect();
}
void perfect()
{
	int num=28,sum=0,i=1,temp=num;
	while(i<num)
	{
		if(num%i==0)
		sum=sum+i;
		i++;
	}
	if(sum==temp)
	printf(" %d is the  perfect number",num);
	else
	printf("%d is the  not perfect number",num);
	
}