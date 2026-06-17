#include<stdio.h>
int main()
{
	int n;

	printf("ENTER THE ARRAY LENGTH :");
	scanf("%d",&n);

	int arr[n];
	
	printf("\n");

	for(int i = 0;i < n;i++)
	{
		printf("ENTER THE ARRAY VALUES :");
		scanf("%d",&arr[i]);
	}

	printf("\n");

	int target;
	
	printf("ENTER THE TARGET VALUE :");
	scanf("%d",&target);

	int found = 0;

	for(int i = 0;i  < n;i++)
	{
		if(arr[i]==target)
		{
			found += 1;
		}
	}

		if(found == 0)
		{
			printf("THE TARGET VALUE IS NOT IN ANY OF THE INDEX\n");
		}
		

		printf("NUMBER OF OCCURANCE OF THE NUMBER %d IS %d",target,found);
		printf("\n");
		return 0;
}
