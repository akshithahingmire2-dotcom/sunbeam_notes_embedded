#include<stdio.h>

struct student{
	int rollno;
	char name[20];
	float marks;
};

#define offset_of(member, type)		(&((type *)0)->member)

int main(void)
{

	printf("offset of rollno = %d\n", offset_of(rollno, struct student));
	printf("offset of name = %d\n", offset_of(name, struct student));
	printf("offset of marks = %d\n", offset_of(marks, struct student));
	
	return 0;
}









