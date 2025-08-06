struct distance
{
	float feet;
	float inch;
};
void main()
{
	struct distance s1,s2;
	printf("enter the feet,inch");
	scanf("%f",&s1.feet);
	scanf("%f",&s1.inch);
	printf("enter the feet,inch");
	scanf("%f",&s2.feet);
	scanf("%f",&s2.inch);
	printf("feet=%f\ninch=%f",s1.feet,s1.inch);
	printf("\nfeet=%f\ninch=%f",s2.feet,s2.inch);
}
