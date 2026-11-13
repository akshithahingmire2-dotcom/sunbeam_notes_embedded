#include<stdio.h>
#include "mymath.h"

int main(void)
{
	int num = 5;
	
	int f = factorial(num);
	printf("5! = %d\n", f);

	int b = 2, i = 3;
	int p = power(b, i);
	printf("2^3 = %d\n", p);


	bool_t ret = is_prime(5);
	if(ret == TRUE)
		printf("5 is prime number\n");
	else
		printf("5 is not prime number\n");

	return 0;
}
