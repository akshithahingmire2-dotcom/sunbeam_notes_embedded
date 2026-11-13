#include<stdio.h>

struct student{
	int rollno;
	char name[20];
	float marks;
};

int main(void)
{

	//	0			- integer value
	//	(type *)0	-	address
	
	printf("offset of rollno = %d\n", &((struct student *)0)->rollno);
	printf("offset of name = %d\n", &((struct student *)0)->name);
	printf("offset of marks = %d\n", &((struct student *)0)->marks);
	
	return 0;
}









