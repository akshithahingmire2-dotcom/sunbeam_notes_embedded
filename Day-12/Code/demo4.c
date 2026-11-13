#include<stdio.h>

/*
Structure to store date information
*/
struct date
{
	int dd; // day
	int mm; // month
	int yy; // year
}; // variable of struct date


/*
Employee structure

Instead of embedding date structure directly,
we are storing pointer to structure date.

dptr → pointer to struct date
*/

typedef struct employee
{
	int empid;       // employee id
	char name[20];   // employee name
	float salary;    // employee salary

	struct date *dptr; // pointer to date structure

}emp_t;


int main()
{

	/*
	Initialize employee structure
	*/

	emp_t e1 = { 1,"ABC",1000.5f};

	/*
	Create separate date structure
	*/

	struct date d1 = { 9,3,2000 };

	/*
	Assign address of date structure to pointer
	*/

	e1.dptr = &d1;
	
	printf("e1 : Id:%d Name : %s Sal : %.2f DOB %d-%d-%d DOJ :%d-%d-%d\n",e1.empid,e1.name,e1.salary,e1.dptr->dd,e1.dptr->mm,e1.dptr->yy);//

	/*
	Pointer to employee structure
	*/

	emp_t *eptr = &e1 ;

	printf("E1 info : ");

	/*
	Access structure members using pointer
	*/

	printf("Id :%d \n",eptr->empid);
	printf("Name : %s \n",eptr->name);
	printf("Salary : %.2f \n",eptr->salary);

	/*
	Access nested structure through pointer
	*/
	printf("Dob : %d - %d - %d \n", eptr->dptr->dd, eptr->dptr->mm, eptr->dptr->yy);

	return 0;
}