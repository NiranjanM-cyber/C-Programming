#include<stdio.h>

void sum(int a,int b)
{
	int add;
	add = a + b;
	printf("THE SUM IS :%d\n",add);
}
int main()
{
	int num1,num2;
	
	printf("ENTER THE VALUE FOR 1 :");
	scanf("%d",&num1);
	
	printf("ENTER THE VALUE FOR 2 :");
	scanf("%d",&num2);

	sum(num1,num2);

	return 0;
}
