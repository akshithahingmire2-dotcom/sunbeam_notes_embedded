#include<stdio.h>
/*
	Shorthand Opr
		- It is used to write code in short and simple way
		- It is also called as compound assignment opr
		- It is binary opr
		- e.g += -= *= /= %=

*/
int main()
{

	int n1 = 10 , n2 = 20, sum;
	sum = n1 + n2;

	n2 += n1 + 20 + 20 ;
//      n2  = n2 + n1 + 20 + 20;

	
	int n3 =  30;
	n3 -= 20 ; // n3 = n3 - 20


	int n4 = 40;
	n4 *= 2 ; // n4 = n4 * 2

	int n5 = 10;
	n5 /= 2; // n5 = n5 / 1  // 10 /(Quot) 2 => 5
	printf("n5 = %d \n ",n5);

	int n6 = 20;
	n6 %= 3 ; // n6 = n6 %3; // 20 %(Rem) 3 = > 2
	printf("n6 = %d \n ",n6);
	return 0;
}
