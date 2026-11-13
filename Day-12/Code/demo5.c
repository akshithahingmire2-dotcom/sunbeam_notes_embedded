#include<stdio.h>

/*
Structure definition for Employee
Each employee has:
1. empid
2. name
3. salary
*/

typedef struct employee
{
	int empid;      // Employee ID
	char name[20];  // Employee Name
	float salary;   // Employee Salary
}emp_t;


/*
Function declarations
*/

//void accept_emp( emp_t *arr , int size );
void accept_emp( emp_t arr[] , int size );
void print_emp(emp_t arr[], int size);


/*
update_sal_id()

Purpose:
--------
Search employee using ID and update salary
*/

void update_sal_id(emp_t arr[] , int size , int id)
{
	int i ;

	for(i=0 ; i < size ; i++)
	{
		if( arr[i].empid == id )
		{
			printf("Employee Found..\n");

			float sal;

			printf("Enter new salary : ");
			scanf("%f",&sal);

			arr[i].salary = sal; // update salary

			return;
		}
	}

	printf("Employee not found..\n");
	return;
}


/*
search_emp_id()

Purpose:
--------
Search employee using employee ID
and display employee information
*/

void search_emp_id(emp_t arr[] , int size , int id)
{
	int i ;

	for(i=0 ; i < size ; i++)
	{
		if( arr[i].empid == id )
		{
			printf("Employee Found..\n");

			printf("Id :%d \n",arr[i].empid);
			printf("Name : %s \n",arr[i].name);
			printf("Salary : %.2f \n",arr[i].salary);

			return;
		}
	}

	printf("Employee not found..\n");
	return;
}


int main()
{
	emp_t e1;       // single employee structure
	emp_t arr[3];   // array of 3 employee structures

	//accept the employee information from user
	accept_emp(arr,3); 

	//display employee information
	print_emp(arr,3);


   //Update salary for employee with ID 
	int id;
	printf("Enter employee ID to update salary : ");
	scanf("%d",&id);
	update_sal_id(arr,3,id);
	print_emp(arr,3);


	//Search employee with ID and display employee information
	printf("Enter employee ID to search : ");
	scanf("%d",&id);
	search_emp_id(arr,3,id);

	return 0;
}


/*
print_emp()

Purpose:
--------
Display all employee details
*/

void print_emp(emp_t arr[], int size)
{
	printf("Empoyee info : ");

	for(int i = 0 ; i< size ;i++)
	{
		printf("%d Epmoyee : ",i+1);

		printf("Id :%d \n",arr[i].empid);
		printf("Name : %s \n",arr[i].name);
		printf("Salary : %.2f \n",arr[i].salary);
	}
}


/*
accept_emp()

Purpose:
--------
Accept employee information from user
*/

void accept_emp( emp_t arr[] , int size )
{
	printf("Enter %d Employee info : \n",size);

	for(int i = 0 ; i < size ; i++)
	{
		printf("Enter %d Employee ID : ",i+1); 
		scanf("%d",&arr[i].empid); 
		
		printf("Enter %d Employee Name : ",i+1); 
		scanf("%*c%s",arr[i].name); 

		printf("Enter %d Employee salary : ",i+1); 
		scanf("%f",&arr[i].salary);
	}
}