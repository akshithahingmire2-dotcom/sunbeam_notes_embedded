#include<stdio.h>

void print_binary(unsigned char n)
{
	unsigned char mask = 0x80;
	printf("%u : ", n);
	while(mask)
	{
		if(n & mask)
			printf("1");
		else
			printf("0");
		mask = mask >> 1;
	}
	printf("\n");
}

int main(void)
{
	print_binary(9);
	print_binary(64);
	print_binary(255);
	print_binary(15);


	return 0;
}

























