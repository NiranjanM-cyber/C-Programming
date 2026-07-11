#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

int main()
{
	struct node *head = NULL , *newnode , *temp, *temp2;

	int choice = 1;

	while(choice)
	{
		newnode = (struct node*) malloc(sizeof(struct node));

		printf("ENTER THE DATA :");
		scanf("%d",&newnode->data);
		printf("\n");

		newnode->next = NULL;

		if(head == NULL)
		{
			head = newnode;
		}

		else
		{
			temp = head;

			while(temp->next != NULL)
			{
				temp = temp->next;
			}

			temp->next = newnode;
		}

		printf("YOU NEED A ANOTHER NODE :?(1 -> add one (or) 0 -> no need)");
		scanf("%d",&choice);
		printf("\n");
	}

	printf("\n 1.ORIGINAL NODES :");

	temp = head;

	while(temp != NULL)
	{
		printf("%d ->",temp->data);
		temp = temp->next;
	}

	printf("NULL\n");
	
	printf("\n 2.AFTER DELETION OF FIRST NODE :");
	if(head != NULL)
	{
		temp2 = head;
		head = head->next;
		free(temp2);

		temp = head;

		while(temp != NULL)
		{
			printf("%d ->",temp->data);
			temp = temp->next;
			
		}
		
		printf("NULL\n");

	}

	return 0;
	
}
