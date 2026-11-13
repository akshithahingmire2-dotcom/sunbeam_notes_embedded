#include "mymath.h"

int factorial(int num)
{
	int fact = 1;
	for(int i = 1 ; i < num ; i++)
		fact *= i;
	return fact;
}

int power(int base, int index)
{
	int p = 1;
	for(int i = 1 ; i <= index ; i++)
		p *= base;
	return p;
}

bool_t is_prime(int num)
{
	for(int i = 2 ; i <= num / 2 ; i++){
		if(num % i == 0)
			return FALSE;
	}
	return TRUE;
}







