struct time
{
	int hour;
	int min;
	int sec;
};
void main()
{
	struct time s1,s2;
	printf("enter the hour,min,sec");
	scanf("%d",&s1.hour);
	scanf("%d",&s1.min);
	scanf("%d",&s1.sec);
	printf("enter the hour,min,sec");
	scanf("%d",&s2.hour);
	scanf("%d",&s2.min);
	scanf("%d",&s2.sec);
	printf("hour=%d\nmin=%d\nsec=%d",s1.hour,s1.min,s1.sec);
	printf("hour=%d\nmin=%d\nsec=%d",s2.hour,s2.min,s2.sec);
}
