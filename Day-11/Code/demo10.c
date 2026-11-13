#include<stdio.h>
#include<stdlib.h>

/*
	syntax:

	// Structure declaration
	struct <tag_name>
	{
		// data members / member fields
		...
	};

	// Structure variable declaration
	struct <tag_name> variable_name;

	- Structure is a user-defined data type used to group
	  different types of variables together.
	- It allows us to create complex data types that represent
	  real-world entities.
	- Each variable inside a structure is called a member or field.
	- Members can be of different data types (int, char, float, etc.).
	- We can access structure members using the dot (.) operator and pointer (->) operator.
	- 
*/


// Structure declaration
struct student
{
	int roll;       // 4 bytes
	char name[20];  // 20 bytes
	float per;      // 4 bytes
};
//-----------------------------------
// Total size = 4 + 20 + 4 = 28 bytes
// (depending on padding rules)

int num;

int main()
{
	/*
	Structure variable declaration and initialization

	struct student → user defined data type
	s1             → variable of type struct student
	*/

	struct student s1 = {21,"Krish",99.99f};

	/*
	Access structure members using dot (.) operator
	*/

	printf("roll : %d \n",s1.roll); // prints roll number
	printf("Name : %s \n",s1.name); // prints student name
	printf("per  : %lf \n",s1.per); // prints percentage

	//-------------------------------------------

	/*
	Designated initialization

	Allows initializing structure members in any order
	using member names.
	*/

	struct student s2= { .name="Kans" , .roll=56 , .per=40.0f  };

	printf("roll : %d \n",s2.roll);
	printf("Name : %s \n",s2.name);
	printf("per  : %lf \n",s2.per);

	/*
	sizeof() returns size of structure variable
	*/

	printf("size s1 : %lu\n",sizeof(s1));

	return 0;
}