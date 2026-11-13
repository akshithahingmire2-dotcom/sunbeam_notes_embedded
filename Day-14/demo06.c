#include<stdio.h>

#define offset_of(member, type)			((long)(&((type *)0)->member))

struct emp{
	int empid;
	char name[20];
	char desg[20];
	double salary;
};

int main(void)
{
	printf("offset_of(empid) = %ld\n", offset_of(empid, struct emp));
	printf("offset_of(name) = %ld\n", offset_of(name, struct emp));
	printf("offset_of(desg) = %ld\n", offset_of(desg, struct emp));
	printf("offset_of(salary) = %ld\n", offset_of(salary, struct emp));

	struct emp e = {12, "abc", "manager", 2034567.0};

	printf("empid = %d\n", *(int *)((char *)&e + offset_of(empid, struct emp)));
	printf("name = %s\n", ((char *)&e + offset_of(name, struct emp)));
	printf("desg = %s\n", ((char *)&e + offset_of(desg, struct emp)));
	printf("salary = %f\n", *(double *)((char *)&e + offset_of(salary, struct emp)));

	return 0;
}









