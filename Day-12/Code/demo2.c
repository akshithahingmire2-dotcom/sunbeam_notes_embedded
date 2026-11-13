#include<stdio.h>

/*
Structure for storing date information
Used for Date of Birth (DOB) and Date of Joining (DOJ)
*/

struct date
{
	int dd; // day
	int mm; // month
	int yy; // year
};


/*
Employee structure

This structure contains:
1. Basic employee information
2. Two nested structures (dob and doj)

Nested structure means:
A structure inside another structure
*/

typedef struct employee
{
	int empid;        // employee id
	char name[20];    // employee name
	float salary;     // employee salary

	struct date dob;  // date of birth
	struct date doj;  // date of joining
	
}emp_t;

int main()
{
	// structure variable for date
	struct date d1;

	/*
	Structure initialization

	Order of initialization:
	empid
	name
	salary
	dob (dd,mm,yy)
	doj (dd,mm,yy)
	*/

	emp_t e1 = { 1,"ABC",1000.5f,9,3,2000, 9,3,2026 };
	
	/*
	Access nested structure members using dot operator
	*/

	printf("e1 : Id:%d Name : %s Sal : %.2f DOB %d-%d-%d DOJ :%d-%d-%d\n",
	e1.empid,
	e1.name,
	e1.salary,
	e1.dob.dd, e1.dob.mm, e1.dob.yy,
	e1.doj.dd, e1.doj.mm, e1.doj.yy);


	/*
	Pointer to structure
	*/

	emp_t *eptr = &e1 ;

	printf("E1 info : ");

	/*
	Access structure members using pointer
	with arrow (->) operator
	*/

	printf("Id :%d \n",eptr->empid);
	printf("Name : %s \n",eptr->name);
	printf("Salary : %.2f \n",eptr->salary);

	/*
	Access nested structure members using pointer
	*/

	printf("DOB : %d-%d-%d \n",eptr->dob.dd, eptr->dob.mm , eptr->dob.yy );
	printf("DOJ : %d-%d-%d \n",eptr->doj.dd, eptr->doj.mm , eptr->doj.yy );

	return 0;
}