#include<stdio.h>

// Write a program to accept student information and display it
// if standard < 5 → student evaluated using grade
// if standard ≥ 5 → student evaluated using percentage

/*
Structure definition for student

Members:
roll  → student roll number
name  → student name
std   → class/standard
grade → used when standard < 5
per   → percentage used when standard ≥ 5
*/

struct student
{
	int roll;      // 4 bytes
	char name[20]; // 20 bytes
	int std;       // 4 bytes 
	char grade;    // 1 byte
	float per;     // 4 bytes
};
//--------------------------------
// Total logical size = 33 bytes
// Actual size may be larger due to padding/alignment


int main()
{
	struct student s1; // structure variable

	/*
	Accept student information
	*/

	printf("Enter the roll : ");
	scanf("%d",&s1.roll);

	printf("Enter name  : ");
	scanf("%s",s1.name);

	printf("Enter the standard :(1 to 10) : ");
	scanf("%d",&s1.std);

	/*
	If standard ≥ 5 → student evaluated using percentage
	If standard < 5 → student evaluated using grade
	*/

	if( s1.std >= 5 )
	{
		printf("Enter the Per : ");
		scanf("%f",&s1.per);
	}
	else
	{
		printf("Enter the grade : ");
		scanf("%*c%c",&s1.grade);
	}

	//----------------------------------------------------

	/*
	Display student information
	*/

	printf("Roll : %d Name : %s Std : %d ",s1.roll,s1.name,s1.std);
	
	if( s1.std >= 5 )
	{
		printf("per : %.2f \n",s1.per);
	}
	else
	{
		printf("Grade : %c \n",s1.grade);
	}

	return 0;
}