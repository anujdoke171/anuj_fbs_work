void perfect(int,int,int,int);
void main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	int sum=0,i=1,temp=num;
	perfect(num,sum,i,temp);
}
void perfect(int num,int sum,int i,int temp)
{
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