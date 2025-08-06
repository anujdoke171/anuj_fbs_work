struct employee
{
	int id;
	char name[20];
	int salary;
};
void main()
{
	struct employee s1,s2;
	printf("enter the id,name,salary");
	scanf("%d",&s1.id);
	scanf("%s",&s1.name);
	scanf("%d",&s1.salary);
	printf("enter the id,name,salary");
	scanf("%d",&s2.id);
	scanf("%s",&s2.name);
	scanf("%d",&s2.salary);
	
	printf("id=%d,name=%s,salary=%d",s1.id,s1.name,s1.salary);
	printf("id=%d,name=%s,salary=%d",s2.id,s2.name,s2.salary);
}