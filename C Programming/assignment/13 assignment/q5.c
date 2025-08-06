#include<stdio.h>
struct student
{
	int rollno;
	char name[10];
	int marks;
};
struct student storestudent();
void displaystudent(struct student);
void main()
{
	struct student s1,s2;
	s1=storestudent();
	s2=storestudent();
	
	displaystudent(s1);
	displaystudent(s2);
}
void displaystudent(struct student stud)
{
	printf("roll no=%d\nname=%s\nmarks=%d\n",stud.rollno,stud.name,stud.marks);

}
struct student storestudent()
{
	struct student stud;
	printf("enter the rollno,name,marks of student");
	scanf("%d",&stud.rollno);
	scanf("%s",&stud.name);
	scanf("%d",&stud.marks);
	
	return stud;
}
