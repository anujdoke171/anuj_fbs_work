int divisible();
void main()
{
	int res=divisible();
	if(res==1)
	printf("divisible by both");
	else if(res==2)
	printf("divisible by 5");
	else if(res==3)
	printf("divisible by 3");
	else 
	printf("divisible by none");
}
int divisible()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if(num%3==0 && num%5==0)
	return 1;
	else if (num%5==0)
	return 2;
	else if(num%3==0)
	return 3;
	else 
	return 4;
}