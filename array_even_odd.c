#include<stdio.h>
int main()
{
	int n;
	int even;
	int reminder;
	int i;

	printf("ENTER THE NUMBER OF ARRAYS  :");
	scanf("%d",&n);

	int arr[n];

	for(i = 0;i < n;i++)
	{
		printf("ENTER THE  ARRAYS :");
		scanf("%d",&arr[i]);
	}

	printf("\n");

	printf("THE NUMBERS IN THE  ARRAYS ARE :");

	for(i = 0;i < n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\n");

	for(i = 0 ;i < n;i++)
	{	
		reminder = arr[i]%2;
		if(reminder == 0)
		{
			printf("\nEVEN NUMBERS :");
			printf("%d",arr[i]);
		}
	}	

	printf("\n");

	for(i = 0 ;i < n;i++)
	{
		reminder = arr[i]%2;
		if(reminder != 0)
		{
			printf("\nODD NUMBERS :");
			printf("%d",arr[i]);
		}
	}

	printf("\n\n");
	return 0;
}
