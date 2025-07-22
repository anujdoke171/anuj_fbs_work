void basic(int);
void main()
{
	int sal;
	printf("enter the salary");
	scanf("%d",&sal);
	basic(sal);
}
void basic(int x)
{
	int da,ta,hra,tsal;
	if(x<=5000)
	{
		da=x*10/100;
		ta=x*20/100;
		hra=x*25/100;
	}
	else
	{
		da=x*15/100;
		ta=x*25/100;
		hra=x*30/100;
	}
	tsal=x+da+ta+hra;
	printf("the basic salary is %d",tsal);
	
}