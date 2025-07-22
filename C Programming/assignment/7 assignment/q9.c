#include<stdio.h>
void main()
{
	int arr[]={11,17,65,645,1};
	int i,temp,n=5;
	for(i=0;i<5;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[n-i-1]);
	}
}