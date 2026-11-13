#include<stdio.h>
#include<stdlib.h>


// Structure declaration
struct student
{
	int roll;       // 4 bytes → stores roll number
	char name[20];  // 20 bytes → stores student name (string)
	float per;      // 4 bytes → stores percentage
}s1; // s1 → global structure variable of type struct student


int main()
{
	// local structure variable
	struct student s2;

	/*
	Accept data for structure variable s1
	Use dot (.) operator to access structure members
	*/

	printf("Enter the Roll num : ");
	scanf("%d",&s1.roll); // store roll number

	printf("Enter Name : ");

	//scanf("%s",s1.name); // reads string but stops at space

	getchar();   // clears leftover newline character from input buffer

	gets(s1.name); // reads full string including spaces

	printf("Enter per : ");
	scanf("%f",&s1.per); // store percentage

	/*
	Display structure data
	*/

	printf("Roll: %d Name : %s Per : %.2f \n",s1.roll,s1.name,s1.per);

	return 0;
}