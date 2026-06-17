#include<stdio.h>
int main()
{
	int n;
	
	printf("ENTER THE LENGTH OF ARRAY :");
	scanf("%d",&n);
	
	int arr[n];

	printf("\n");

	for(int i = 0;i < n;i++)
	{
		printf("ENTER THE ELEMENTS IN THE ARRAY :");
		scanf("%d",&arr[i]);
	}

	printf("\n");

	int target;
	int last_occurance = -1 ;
	
	printf("ENTER THE TARGET :");
	scanf("%d",&target);

	printf("\n");

	int found = 0;

	for(int i = 0;i < n;i++)
	{
		if(arr[i] == target)
		{
			found += 1;
			last_occurance = i;
		}
	}
	
	printf("LAST OCCURANCE OF AN ELEMENT IN AN ARRAY :%d",last_occurance);
	printf("\n");

	return 0;

}
