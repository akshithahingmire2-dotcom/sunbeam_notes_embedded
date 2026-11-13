#include<stdio.h>

int main(void)
{
	unsigned char num1 = 0xAB;
	unsigned char res1;

	printf("num1 = %X\n", num1);
	
	res1 = num1 << 2;
	printf("num1 << 2 = %X\n", res1);		// 0xAC
	res1 = num1 >> 2;
	printf("num1 >> 2 = %X\n", res1);		// 0x2A

	signed char num2 = 0xAB;
	signed char res2;

	printf("num2 = %X\n", num2);
	
	res2 = num2 << 2;
	printf("num2 << 2 = %X\n", res2);		// 0xAC
	res2 = num2 >> 2;
	printf("num2 >> 2 = %X\n", res2);		// 0xEA
	return 0;
}

























