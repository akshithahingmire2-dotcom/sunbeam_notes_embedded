#include<stdio.h>
/*
	Relational opr
		- It is used to compare two value
		- It is also called as comparison opr
		- It is binary opr
		- output of relational opr is in boolean form (True/False) => 1/0
		- e.g > < <= >= == !=
	    
*/


int main()
{
	printf("10 > 20 = %d \n",  10 > 20);//0
	printf("10 < 20 = %d \n",  10 < 20);//1


	printf("10 <= 20 = %d \n",  10 <= 20);//1
	printf("10 >= 20 = %d \n",  10 >= 20);//0

	
	printf("10 == 20 = %d \n",  10 == 20);//0
	printf("10 == 10 = %d \n",  10 == 10);// 1


	printf("10 != 20 = %d \n",  10 != 20);//1
	printf("10 != 10 = %d \n",  10 != 10);// 0
	return 0;
}
