#include<stdio.h>

struct student{
	int rollno;
	char name[20];
	float marks;
};

int main(void)
{
	struct student s = {1, "abc", 90.5f};

	printf("&s = %u\n", &s);
	printf("&s.rollno = %u\n", &s.rollno);
	printf("&s.name = %u\n", &s.name);
	printf("&s.marks = %u\n", &s.marks);

	printf("offsets using structure variable : \n");
	printf("offset of rollno = %d\n", (char *)&s.rollno - (char *)&s);
	printf("offset of name = %d\n", (char *)&s.name - (char *)&s);
	printf("offset of marks = %d\n", (char *)&s.marks - (char *)&s);

	struct student *p = &s;

	printf("offsets using structure pointer : \n");
	printf("offset of rollno = %d\n", (char *)&p->rollno - (char *)p);
	printf("offset of name = %d\n", (char *)&p->name - (char *)p);
	printf("offset of marks = %d\n", (char *)&p->marks - (char *)p);
	
	return 0;
}









