#include<stdio.h>

int fact(int num)
{
	if(num > 0)
	{
	num = num *fact(num - 1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int num;
	printf("ENTER THE NUM VALUE :");
	scanf("%d",&num);

	printf("THE FACTORIAL OF THE %d is :%d\n",num,fact(num));
	return 0;

}
