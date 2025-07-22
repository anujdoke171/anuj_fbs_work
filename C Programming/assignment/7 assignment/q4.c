#include<stdio.h>
void main()
{
	int arr[5],temp;
	printf("enter the array");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i=i+2)
	{
		temp=arr[i];
	
	printf("the alternate number is %d\n",temp);
}
}