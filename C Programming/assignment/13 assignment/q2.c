#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	int salary;
};
struct employee storeemployee();
void displayemployee(struct employee emp);
void main()
{
	struct employee e1,e2,e3,e4,e5;
	e1=storeemployee();
	e2=storeemployee();
	e3=storeemployee();
	e4=storeemployee();
	e5=storeemployee();
	 
	 displayemployee(e1);
	 displayemployee(e2);
	 displayemployee(e3);
	 displayemployee(e4);
	 displayemployee(e5);
}
void displayemployee(struct employee emp)
{
	printf("id=%d,name=%s,salary=%d\n",emp.id,emp.name,emp.salary);
}
	struct employee storeemployee()
	{
		struct employee emp;
	printf(" enter the employee id,name,salary");
	scanf("%d",&emp.id);
	scanf("%s",&emp.name);
	scanf("%d",&emp.salary);
	return emp;
	
}