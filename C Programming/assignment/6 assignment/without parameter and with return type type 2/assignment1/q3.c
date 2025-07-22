int leap();
void main()
{
		if(leap())
		printf(" leap year");
		else
		printf(" not leap year");
}
	int leap()
{
       int year;
       printf("enter the year");
       scanf("%d",&year);
 	if(int year%4==0&&year%100!=0||year%400==0)
	{
		return 1;
		{
			return 0;
		}
}
}
