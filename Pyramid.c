#include<stdio.h>
void main()
{
	int n;
	printf("ENTER THE VALUE :");
	scanf("%d",&n);

	for(int i = n;i >= 0;i--)
	{
		for(int j = n; j > n - i;j-- )
		{
			printf(" ");
		}
		for(int k = 0;k <= n - i;++k)
		{
			printf("* ");
		}
		printf("\n");
	}

}
