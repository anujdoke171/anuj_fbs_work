int perfect();
void main()
{
	int res=perfect();
	if(res==0)
	printf("no is perfect");
	else 
	printf("no is not perfect");
}
int perfect()
{
	int num=29,sum=0,i=1,temp=num;
	while(i<num)
	{
		if(num%i==0)
		sum=sum+i;
		i++;
	}
	if(sum==temp)
	return 0;
	else
	return 1;
	
}