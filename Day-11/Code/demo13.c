#include<stdio.h>
#include<stdlib.h>


// Structure declaration
struct student
{
	int roll;       // 4 bytes → roll number
	char name[20];  // 20 bytes → student name
	float per;      // 4 bytes → percentage
}; // structure type defined


/*
accept_student()

Purpose:
--------
Accept student details from the user.

Parameter:
sptr → pointer to structure student

Using pointer allows us to modify the original
structure variable passed from main().
*/

void accept_student( struct student *sptr)
{
	printf("Enter Roll, Name , Per : ");

	/*
	sptr->roll  → access roll member using pointer
	sptr->name  → access name member
	sptr->per   → access percentage member

	%*c is used to ignore newline character from input buffer.
	*/

	scanf("%d%*c%s%f",&sptr->roll,sptr->name,&sptr->per);
}


/*
print_student()

Purpose:
--------
Display student details.

Parameter:
s1 → structure variable passed by value.
*/

void print_student(struct student s1)
{
	printf("Roll :%d Name : %s Per : %.2f \n",s1.roll,s1.name,s1.per);
}


int main()
{
	// structure variable declaration
	struct student s2 ;

	/*
	Passing address of structure to function
	so that function can modify its data.
	*/

	accept_student( &s2 );

	/*
	Passing structure variable by value
	to display student data.
	*/

	print_student( s2);

	return 0;
}