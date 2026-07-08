#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
	int roll;
	char name[20];
	float marks;
};

void add_Students();
void view_Students();
void search_Students();
void update_Students();
void delete_Students();

int main()
{
	int choice;

	while(1)
	{
		printf("\n==========STUDENTS MANGEMENT==========\n");
		printf("1.Add a record.\n");
		printf("2.View a record.\n");
		printf("3.Search a record.\n");
		printf("4.Update a record.\n");
		printf("5.Delete a record.\n");
		printf("6.Exit.\n");
		printf("Enter your choice :");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				add_Students();
				break;

			case 2:
				view_Students();
				break;

			case 3:
				search_Students();
				break;

			case 4:
				update_Students();
				break;

			case 5:
				delete_Students();
				break;

			case 6:
				printf("\nExiting from the program...\n");
				exit(0);

			default:
				printf("\nInvaild choice.\n");

		}
	}

	return 0;
}

void add_Students()
{
	FILE *fp;
	
	struct student s1;

	fp = fopen("students2.dat","ab");

	if(fp == NULL)
	{
		printf("ERROR OR NO SUCH FILE EXIT.\n");
		return;
	}

	else
	{	
		printf("ENTER THE ROLL NUMBER :");
		scanf("%d",&s1.roll);

		printf("ENTER THE NAME :");
		scanf(" %[^\n]",s1.name);

		printf("ENTER THE MARK :");
		scanf("%f",&s1.marks);

		fwrite(&s1,sizeof(struct student),1,fp);
		fclose(fp);

		printf("\nStudent record added successfully.\n");
	}
}

void view_Students()
{
	FILE *fp;

	struct student s1;

	fp = fopen("students2.dat","rb");

	if(fp == NULL)	
	{
		printf("ERROR OR NO SUCH FILE EXIT.");
		return;
	}

	else
	{
		printf("\n%-10s %-16s %-10s\n","ROLL","NAME","MARKS");
		printf("----------------------------------\n");
	
		while(fread(&s1,sizeof(struct student),1,fp))
		{
			printf("%-10d %-16s %-10.1f\n",s1.roll,s1.name,s1.marks);
		}

		fclose(fp);
	}
}

void search_Students()
{
	int roll;

	FILE *fp;

	struct student s1;
	
	int found = 0;

	fp = fopen("students2.dat","rb");

	if(fp == NULL)
	{
		printf("ERROR OR NO SUCH FILE EXIT.");
		return;
	}

	else
	{
		printf("Enter the rollno to find :");
		scanf("%d",&roll);
		while(fread(&s1,sizeof(struct student),1,fp))
		{
			if(s1.roll == roll)
			{
				printf("\n%-10s %-16s %-10s\n","ROLL","NAME","MARKS");
				printf("----------------------------------\n");
				printf("%-10d %-16s %-10.1f\n",s1.roll,s1.name,s1.marks);
				found+=1;
				break;
			}
					
		}

		fclose(fp);	
	}

	if(found == 0)
	{
		printf("\nThere is no such rollno %d.\n",roll);
	}

}

void update_Students()
{
	FILE *fp;
	
	struct student s1;

	int found = 0;

	int roll;

	fp = fopen("students2.dat","rb+");

	if(fp == NULL)
	{
		printf("ERROR OR NO SUCH FILE EXIT.\n");
		return;
	}

	printf("Enter the roll number to update :");
	scanf("%d",&roll);

	while(fread(&s1,sizeof(struct student),1,fp))
	{
		if(s1.roll == roll)
		{
			printf("ENTER THE ROLL NUMBER :");
			scanf("%d",&s1.roll);

			printf("ENTER THE NAME :");
			scanf(" %[^\n]",s1.name);

			printf("ENTER THE MARK :");
			scanf("%f",&s1.marks);
			
			fseek(fp,-sizeof(struct student),SEEK_CUR);
			fwrite(&s1,sizeof(struct student),1,fp);

			printf("\nStudent record has been updated successfully.\n");

			found+=1;
			
			break;
		}
	}

	fclose(fp);

	if(!found)
	{
		printf("\nThere is no such rollno %d.\n",roll);
	}
}

void delete_Students()
{
	FILE *fp ,*temp;

	struct student s1;
	
	int roll;

	int found = 0;

	fp = fopen("students2.dat","rb");

	if(fp == NULL)
	{
		printf("ERROR OR NO SUCH FILE EXIT.\n");
		return;
	}
	
	temp = fopen("temp.dat","wb");
	if(temp == NULL)
	{
		printf("ERROR OPENING THE TEMPORARY FILE.");
		fclose(fp);
		return;	
	}

	printf("ENTER THE ROLL NUMBER TO DELETE A RECORD :");
	scanf("%d",&roll);

	while(fread(&s1,sizeof(struct student),1,fp))
	{
		if(s1.roll == roll)
		{	
			found+=1;
			continue;
		}

	fwrite(&s1,sizeof(struct student),1,temp);
	}
	
	fclose(fp);
	fclose(temp);

	remove("students2.dat");
	rename("temp.dat","students2.dat");

	if(found)
	{
		printf("\nStudent record has been deleted successfully\n");
	}

	else
	{
		printf("\nStudent with roll number %d is not found\n",roll);
	}
}
