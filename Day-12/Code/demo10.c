#include<stdio.h>

/*
Structure student

Members:
roll  → student roll number
name  → student name
std   → student standard/class

res → nested structure used to store result
      (either grade OR percentage depending on class)
*/

struct student
{
	int roll;      // 4 bytes → roll number
	char name[20]; // 20 bytes → student name
	int std;       // 4 bytes → student standard

	/*
	Nested structure for result
	This structure contains two possible result types
	*/

	struct res
	{
		char grade;  // used when standard < 5
		float per;   // used when standard ≥ 5
	}res;          // variable of nested structure

};
//--------------------------------
// Logical total size ≈ 33 bytes
// Actual size may increase due to padding


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
	If standard ≥ 5 → percentage is stored
	If standard < 5 → grade is stored
	*/

	if( s1.std >= 5 )
	{
		printf("Enter the Per : ");
		scanf("%f",&s1.res.per);
	}
	else
	{
		printf("Enter the grade : ");
		scanf("%*c%c",&s1.res.grade);
	}

	//----------------------------------------------------

	/*
	Display student information
	*/

	printf("Roll : %d Name : %s Std : %d ",s1.roll,s1.name,s1.std);
	
	if( s1.std >= 5 )
	{
		printf("Per : %.2f \n",s1.res.per);
	}
	else
	{
		printf("Grade : %c \n",s1.res.grade);
	}

	return 0;
}