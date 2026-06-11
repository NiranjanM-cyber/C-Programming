#include<stdio.h>
int main()
{
	int i;
	int n;
	int sum = 0;

	printf("ENTER THE ARRAY :");
	scanf("%d",&n);

	int arr[n];

	for(int i = 0 ; i < n ; i++)
	{
		printf("ENTER THE NUMBER :");
		scanf("%d",&arr[i]);	
	}

	printf("VALUES IN THE ARRAY :");
	scanf("%d",&arr[i]);

	for(int i = 0 ; i < n ; i++)
	{
		sum += arr[i];
		
	}

	printf("SUM =%d",sum);

	return 0;
}
