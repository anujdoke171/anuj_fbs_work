struct date
{
	int date;
	int month;
	int year;
};
void main()
{
	struct date s1,s2;
	printf("enter the date,month,year");
	scanf("%d",&s1.date);
	scanf("%d",&s1.month);
	scanf("%d",&s1.year);
	printf("enter the date,month,year");
	scanf("%d",&s2.date);
	scanf("%d",&s2.month);
	scanf("%d",&s2.year);
	printf("date=%d\nmonth=%d\nyear=%d",s1.date,s1.month,s1.year);
	printf("date=%d\nmonth=%d\nyear=%d",s2.date,s2.month,s2.year);
}
