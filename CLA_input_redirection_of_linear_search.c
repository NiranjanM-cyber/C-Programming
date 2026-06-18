#include<stdio.h>
#include<stdlib.h>

int main(int argc , char *argv[])
{
	int item;
	item = atoi(argv[1]);

	if(argc != 2)
	{
		printf("Usage: %s <item>\n",argv[0]);
		return 1;
	}

	int marks;
	int r;

	while(1)
	{
		r = scanf("%d",&marks);
		if(r == EOF)
		{
			break;
		}
		if(marks == item)
		{
			printf("\nITEM FOUND\n");
			break;
		}

	}

	return 0;
}
