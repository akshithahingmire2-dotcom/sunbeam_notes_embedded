#include<stdio.h>

/*

	* Check given num Even or ODD
	     condition
	if ( num % 2 == 0 )
		even   -> True
	else
		odd    -> False

	* Ternery Oprator
		* Ternary oprator is also called conditional oprator
	 	syntax :
			Condition ? True  :  False ;
		e.g
			num%2 == 0? printf("Even")  : printf("Odd") ;
			cond      ? True            : False ;


*/


int main()
{
/*
	// find greater num from Two num
	int n1= 10 ,n2 = 20;

	// cond ? True : False ;

	n1 > n2  ? printf("N1 is greater \n") : printf("N2 is greater \n");
	int max = n1 > n2 ? n1 : n2 ;
	printf("Max : %d \n",max);
*/
	// check given num is +ve or -ve
	int num;
	printf("Enter the num  : ");
	scanf("%d",&num);
	
	//10> 0 ?    True                 :    False
	num > 0 ? printf("Num is +ve \n") :  printf("Num is -ve");

	return 0 ;
}
