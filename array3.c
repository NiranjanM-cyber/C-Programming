#include<stdio.h>
int main()
{
	int temp;
	int arr[5] = {1,2,3,4,5};

	int size = sizeof(arr)/sizeof(arr[0]);

	printf("The length of the elements :%d",size);
	for(int i = 0;i < size/2 ;i++)
	{
		temp=arr[i];
		arr[i]=arr[size -1 -i];
		arr[size -1 -i]=temp;
	}	
	for(int i = 0;i < size ;i++)
	{
		printf("\nReverse of the number :%d\n",arr[i]);
	}
	return 0;
}
