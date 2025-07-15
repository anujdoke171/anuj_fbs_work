void main()
{
	int bs=15000;
	int da,ta,hra,tsal;
	if(bs<=5000)
	{
		da=bs*10/100;
		ta=bs*20/100;
		hra=bs*25/100;
	}
	else
	{
		da=bs*15/100;
		ta=bs*25/100;
		hra=bs*30/100;
	}
	tsal=bs+da+ta+hra;
	printf("the basic salary is %d",tsal);
	
	
}