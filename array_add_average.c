#include<stdio.h>
int main()
{
	int i;
	int n;
	int sum = 0;
	int average;

	printf("\n");
	printf("ENTER THE ARRAY :");
	scanf("%d",&n);

	int arr[n];

	for(int i = 0 ; i < n ; i++)
	{
		printf("ENTER THE NUMBER :");
		scanf("%d",&arr[i]);
	}

	printf("VALUES IN THE ARRAY :");

	for(int i = 0 ; i < n ; i++)
	{
		printf("%d ",arr[i]);
	}

	for(int i = 0 ; i < n ; i++)
	{
		sum += arr[i];
		average = sum / n;
	}

	printf("\nSUM =%d\n",sum);
	printf("AVERAGE =%d",average);
	
	printf("\n");
	return 0;
}
