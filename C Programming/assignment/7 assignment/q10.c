#include<stdio.h>
void main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[]={10,20,30,40,50};
	int arr3[]={  };
	for(int i=0;i<5;i++)
	{
		arr3[i]=arr1[i]+arr2[i];
	}
	for(int i=0;i<5;i++)
	{	
	printf("the addition is %d \n",arr3[i]);

}
}