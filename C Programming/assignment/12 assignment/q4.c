struct HR
{
	int id;
	char name[20];
	int salary;
	int commission;
};
void main()
{
	struct HR s1,s2;
	printf("enter the HR id,name,salary,comission");
	scanf("%d",&s1.id);
	scanf("%s",&s1.name);
	scanf("%d",&s1.salary);
	scanf("%d",&s1.commission);
	printf("id=%d,name=%s,salary=%d,commission=%d",s1.id,s1.name,s1.salary,s1.commission);
	printf("\nenter the HR id,name,salary,comission");
	scanf("%d",&s2.id);
	scanf("%s",&s2.name);
	scanf("%d",&s2.salary);
	scanf("%d",&s2.commission);
//	printf("id=%d,name=%s,salary=%d,commission=%d",s1.id,s1.name,s1.salary,s1.commission);
	printf("nid=%d,name=%s,salary=%d,commission=%d",s2.id,s2.name,s2.salary,s2.commission);
	
}