#include<stdio.h>

struct test1{
	char a;		//	1
	short b;	//	2
	int c;		//	4
};				//	7 bytes

struct test2{
	char a;		//	1
	int c;		//	4
	short b;	//	2
};				//	7 bytes

int main(void)
{
	printf("sizeof(struct test1) = %ld\n", sizeof(struct test1));
	
	printf("sizeof(struct test2) = %ld\n", sizeof(struct test2));

	struct test1 t;

	printf("&t = %u\n", &t);
	printf("&t.a = %u\n", &t.a);
	printf("&t.b = %u\n", &t.b);
	printf("&t.c = %u\n", &t.c);


	return 0;
}








