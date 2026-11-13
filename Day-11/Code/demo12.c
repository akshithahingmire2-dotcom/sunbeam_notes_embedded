#include<stdio.h>


// Structure declaration
struct student
{
	int roll;       // 4 bytes → roll number
	char name[20];  // 20 bytes → student name
	float per;      // 4 bytes → percentage
}; // structure type defined


int main()
{
	/*
	Initialize structure variable
	*/

	struct student s2 = { 22, "SUNBEAM" ,70.0f } ;

	/*
	Declare pointer to structure

	ptr can store address of a variable
	of type struct student
	*/

	struct student *ptr ;

	printf("size of ptr : %lu \n",sizeof(ptr)); // prints size of pointer (usually 8 bytes on 64-bit system)

	// store address of structure variable
	ptr = &s2;

	/*
	Access structure members using structure variable
	with dot (.) operator
	*/

	printf("Roll: %d Name : %s Per : %.2f \n",s2.roll,s2.name,s2.per);

	/*
	Access structure members using pointer

	-> operator is used with structure pointers

	ptr->roll  is same as  (*ptr).roll
	ptr->name  is same as  (*ptr).name
	ptr->per   is same as  (*ptr).per
	*/

	printf("Roll  :%d name : %s per : %.2f \n",ptr->roll,ptr->name,ptr->per);

	return 0;
}