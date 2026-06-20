#include<stdio.h>

int add(int a,int b)
{
	return a + b;
}
int main()
{
	int num1;
	int num2;
	int sum;
	
	printf("ENTER THE VALUE FOR 1 :");
	scanf("%d",&num1);

	printf("ENTER THE VALUE FOR 2 :");
	scanf("%d",&num2);

	sum = add(num1,num2);

	printf("THE SUM OF TWO NUMBERS IS :%d\n",sum);
	
	return 0;
}


