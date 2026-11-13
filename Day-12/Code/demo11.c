#include<stdio.h>

/*
Structure with Nested Union

Structure student contains:
    roll  → student roll number
    name  → student name
    std   → standard (class)
    res   → union storing result
*/

struct student
{
	int roll;      // 4 bytes
	char name[20]; // 20 bytes
	int std;       // 4 bytes 

	/*
	Union inside structure

	Union members share same memory. so we  save memory by using union for result since 
	only one type of result is needed based on standard.
	So union size = size of largest member.
	*/

	union res
	{
		char grade;  // 1 byte
		float per;   // 4 bytes
	}res;           // union variable

}; //--------------------------------
// total size ≈ 32 bytes (with padding)


int main()
{
	struct student s1;

	printf("Enter the roll : ");
	scanf("%d",&s1.roll);

	printf("Enter name  : ");
	scanf("%s",s1.name);

	printf("Enter the standard :(1 to 10) : ");
	scanf("%d",&s1.std);

	/*
	If student is in standard ≥ 5
	store percentage.
	Otherwise store grade.
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