#include<stdio.h>
int main()
{
	int n;

	printf("ENTER THE ARRAY LENGTH :");
	scanf("%d",&n);
	printf("\n");
	int arr[n];
	for(int i = 0 ; i < n ; i++)
	{
		printf("ENTER THE ARRAY VALUES :");
		scanf("%d",&arr[i]);
	}
	printf("\n");

	int target;

	printf("ENTER THE TARGET VALUE :");
	scanf("%d",&target);
	
	printf("\n");

	int size = sizeof(arr)/sizeof(arr[0]);

	int found = 0;

	int left = 0;
	int right = size - 1;

	while(left <= right)
	{
		int mid = (left + right)/2;

		if(arr[mid] == target)
		{
			printf("THE TARGET IS IN THE INDEX OF %d",mid);
			found = found + 1;
			break;
		}

		else if(arr[mid] < target)
		{
			left = mid + 1;
		}

		else
		{
			right = mid - 1;
		}
	}

	if(found == 0)
	{
		printf("ELEMENT IS NOT FOUND \n");
	}
	
	printf("\n");	
	return 0;
}	
