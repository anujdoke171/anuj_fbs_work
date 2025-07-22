void divisible(int);
void main()
{
	int no;
	printf("enter the number");
	scanf("%d",&no);
	divisible(no);
}
void divisible(int num)
{
	if(num%3==0 && num%5==0)
	printf("the number is divided by both");
	else if (num%5==0)
	printf("the number is divided by 5");
	else if(num%3==0)
	printf("the number is divided 3");
	else 
	printf("the number is divided by none");
}