#include<stdio.h>
int main()
{
	int n;
	int data;
	int data_found;
	
	printf("ENTER THE ARRAY VALUE :");
	scanf("%d",&n);
	int arr[n];
	printf("ENTER THE VALUE OF DATA TO FIND :");
	scanf("%d",&data);
	
	printf("ENTER THE VALUE IN THE ARRAY :");
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("THE ENTER VALUES ARE :");
	for(int i = 0 ; i < n ; i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\n");

	for(int i = 0 ; i < n ; i++)
	{
		if(arr[i] == data)
		{	
			printf("THE DATA VALUE IS IN THE INDEX OF :%d",i);
			data_found ++;
			break ;
		}

	}

		if(data_found == 0)
		{
	
		printf("THE VALUES ARE NOT IN ANY OF THE INDEX IN THE ARRAY");
		}

	printf("\n");
	return 0;
}
