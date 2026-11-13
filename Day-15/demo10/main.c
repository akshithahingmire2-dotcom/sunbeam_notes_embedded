#include<stdio.h>
#include "mymath.h"

int main(void)
{
	printf("5! = %d\n", factorial(5));
	printf("2^3 = %d\n", power(2, 3));


	bool_t ret = is_prime(5);
	if(ret == TRUE)
		printf("5 is prime number\n");
	else
		printf("5 is not prime number\n");

	return 0;
}
