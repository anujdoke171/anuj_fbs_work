#include<stdio.h>
void main()
{
	int arr[]={11,12,13,14,15};
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	printf("the addition is %d",sum);
}