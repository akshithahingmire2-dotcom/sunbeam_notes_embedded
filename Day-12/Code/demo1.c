#include<stdio.h>

/*
Structure Example with typedef

typedef allows creating an alias name for a structure.
So instead of writing:

struct employee e1;

we can simply write:

emp_t e1;
*/

/*
struct employee
{
	int empid;
	char name[20];
	float salary;
}e1;
*/


// Structure declaration using typedef
typedef struct employee
{
	int empid;       // employee id (4 bytes)
	char name[20];   // employee name (string)
	float salary;    // employee salary
}emp_t;              // alias name for struct employee


int main()
{
	/*
	Structure initialization (normal initialization)
	*/

	emp_t e1 = {1 , "John" , 1000.5F };

	/*
	Designated initialization
	Members can be initialized in any order.
	*/

	emp_t e2 = { .salary=1000.5f, .name="Cena" , .empid=2 };


	
	//Access structure members using dot (.) operator
	printf("E1 Id : %d name: %s Salery: %f \n",e1.empid, e1.name , e1.salary);
	printf("E2 Id : %d name: %s Salery: %f \n",e2.empid, e2.name , e2.salary);



	//Pointer to structure	
	emp_t *eptr = &e1 ;

	printf("E1 info : ");

	//Use -> operator when accessing structure members through pointer
	printf("Id :%d \n",eptr->empid);
	printf("Name : %s \n",eptr->name);
	printf("Salary : %.2f \n",eptr->salary);

	return 0;
}