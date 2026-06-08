#include<stdio.h>
int main()
{
	int arr[5] = {10,2,3,4,5};
	int largest;
	int smallest;
	int min = arr[0];
	int max = arr[0];
	int length = sizeof (arr)/sizeof(arr[0]);
	for(int i = 0;i<length;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		
		}

		else if(arr[i]<min)
		{
		min = arr[i];
		}
	}
			printf("THE MAXIMUM AMONG THIS :%d",max);
			printf("\nTHE MINIMUM AMONG THIS :%d\n",min);

	for(int  i = 0;max<sizeof(arr-1);i++)
	{
		printf("%d",max);
	}
	return 0;
}
