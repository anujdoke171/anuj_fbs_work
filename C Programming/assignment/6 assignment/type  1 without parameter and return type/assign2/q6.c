void divisible();
void main()
{
	divisible();
}
void divisible()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if(num%3==0 && num%5==0)
	printf("the number is divided by both");
	else if (num%5==0)
	printf("the number is divided by 5");
	else if(num%3==0)
	printf("the number is divided 3");
	else 
	printf("divided by none");
}