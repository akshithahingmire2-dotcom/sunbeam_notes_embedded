#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
    Structure to store car information
*/
typedef struct car
{
	int model;
	char name[30];
	float price;
}car_t;


/* function declarations */
void accept_car(car_t *c1);
void print_car(car_t c1);
void add_car_file(car_t c1);
void display_file();
void search_model(int model);
void update_car(int model);
void delete_car(int model);


int main()
{
	car_t c1;
	int ch;
	int model;

	do
	{
		printf("\n~~~~~~~~~~~~ Welcome Star Garage ~~~~~~~~~~~\n");
		printf("0.Exit\n");
		printf("1.Add Car\n");
		printf("2.Display Cars\n");
		printf("3.Search Car by Model\n");
		printf("4.Update Car\n");
		printf("5.Delete Car\n");

		printf("Enter your choice : ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				accept_car(&c1);
				add_car_file(c1);
				break;

			case 2:
				display_file();
				break;

			case 3:
				printf("Enter model to search : ");
				scanf("%d",&model);
				search_model(model);
				break;

			case 4:
				printf("Enter model to update : ");
				scanf("%d",&model);
				update_car(model);
				break;

			case 5:
				printf("Enter model to delete : ");
				scanf("%d",&model);
				delete_car(model);
				break;

			case 0:
				printf("Thank you...\n");
				break;

			default:
				printf("Invalid choice\n");
		}

	}while(ch != 0);

	return 0;
}


/*
    Accept car information from user
*/
void accept_car(car_t *c1)
{
	printf("Enter model name price : ");
	scanf("%d %s %f",&c1->model,c1->name,&c1->price);
}


/*
    Print single car record
*/
void print_car(car_t c1)
{
	printf("Model : %d  Name : %s  Price : %.2f\n",
			c1.model,c1.name,c1.price);
}


/*
    Add car record into file
*/
void add_car_file(car_t c1)
{
	FILE *fp = fopen("DATA.db","ab");

	if(fp == NULL)
	{
		printf("File open failed\n");
		return;
	}

	fwrite(&c1,sizeof(c1),1,fp);

	fclose(fp);

	printf("Car added successfully\n");
}


/*
    Display all records from file
*/
void display_file()
{
	car_t c1;

	FILE *fp = fopen("DATA.db","rb");

	if(fp == NULL)
	{
		printf("No records found\n");
		return;
	}

	printf("\n----- Car Records -----\n");

	while(fread(&c1,sizeof(c1),1,fp) == 1)
	{
		print_car(c1);
	}

	fclose(fp);
}


/*
    Search car by model number
*/
void search_model(int model)
{
	car_t c1;

	FILE *fp = fopen("DATA.db","rb");

	if(fp == NULL)
	{
		printf("File not found\n");
		return;
	}

	while(fread(&c1,sizeof(c1),1,fp) == 1)
	{
		if(c1.model == model)
		{
			printf("Car Found\n");
			print_car(c1);
			fclose(fp);
			return;
		}
	}

	printf("Car not found\n");

	fclose(fp);
}


/*
    Update car record
*/
void update_car(int model)
{
	car_t c1;

	FILE *fp = fopen("DATA.db","rb+");

	if(fp == NULL)
	{
		printf("File not found\n");
		return;
	}

	while(fread(&c1,sizeof(c1),1,fp) == 1)
	{
		if(c1.model == model)
		{
			printf("Existing record:\n");
			print_car(c1);

			printf("Enter new details\n");
			accept_car(&c1);

			fseek(fp,-sizeof(c1),SEEK_CUR);

			fwrite(&c1,sizeof(c1),1,fp);

			printf("Record updated\n");

			fclose(fp);
			return;
		}
	}

	printf("Record not found\n");

	fclose(fp);
}


/*
    Delete record from file
*/
void delete_car(int model)
{
	car_t c1;

	FILE *fp = fopen("DATA.db","rb");
	FILE *temp = fopen("temp.db","wb");

	if(fp == NULL || temp == NULL)
	{
		printf("File error\n");
		return;
	}

	int found = 0;

	while(fread(&c1,sizeof(c1),1,fp) == 1)
	{
		if(c1.model == model)
		{
			found = 1;
			continue;
		}

		fwrite(&c1,sizeof(c1),1,temp);
	}

	fclose(fp);
	fclose(temp);

	remove("DATA.db");
	rename("temp.db","DATA.db");

	if(found)
		printf("Record deleted\n");
	else
		printf("Record not found\n");
}