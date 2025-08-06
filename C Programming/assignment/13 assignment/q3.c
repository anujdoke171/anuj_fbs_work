#include<stdio.h>
struct admin
{
	int id;
	char name[20];
	int salary;
};
struct admin storeadmin();
void displayadmin(struct admin adm);
void main()
{
	struct admin e1,e2;
	e1=storeadmin();
	e2=storeadmin();
	 
	 displayadmin(e1);
	 displayadmin(e2);
}
void displayadmin(struct admin adm)
{
	printf("id=%d,name=%s,salary=%d\n",adm.id,adm.name,adm.salary);
}
	struct admin storeadmin()
	{
		struct admin adm;
	printf(" enter the admin id,name,salary");
	scanf("%d",&adm.id);
	scanf("%s",&adm.name);
	scanf("%d",&adm.salary);
	return adm;
	
}