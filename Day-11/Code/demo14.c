#include<stdio.h>
#include<stdlib.h>


// Structure declaration using typedef
typedef struct student
{
	int roll;       // 4 bytes → roll number
	char name[20];  // 20 bytes → student name
	float per;      // 4 bytes → percentage
}stud_t;  // stud_t → alias name for struct student


/*
accept_student()

Purpose:
--------
Accept details of one student.

Parameter:
sptr → pointer to structure student

Using pointer allows the function to modify
the original structure variable.
*/

void accept_student( struct student *sptr)
{
	printf("Enter Roll, Name , Per : ");

	/*
	sptr->roll  → access roll field
	sptr->name  → access name field
	sptr->per   → access percentage field
	*/

	scanf("%d%*c%s%f",&sptr->roll,sptr->name,&sptr->per);
}


/*
print_student()

Purpose:
--------
Display details of one student.

Parameter:
s1 → structure variable passed by value.
*/

void print_student(struct student s1)
{
	printf("Roll :%d Name : %s Per : %.2f \n",s1.roll,s1.name,s1.per);
}


int main()
{
	/*
	Array of structures

	stud_t arr[3] creates 3 structure variables:

	arr[0]
	arr[1]
	arr[2]
	*/

	//struct student arr[3] = { {11,"AAA",99}, {22,"RRR",99} , {33,"CCC",40} };
	//                          arr[0]         arr[1]          arr[2]

	//struct student arr[3];

	stud_t arr[3];

	int i;

	// Accept student details
	for(i= 0 ; i < 3 ; i++)
	{
		accept_student( &arr[i] );  // pass address of each structure
	}

	// Display student details
	for(i = 0 ; i< 3 ; i++)
	{
		print_student(arr[i]);  // pass structure variable
	}

	return 0;
}