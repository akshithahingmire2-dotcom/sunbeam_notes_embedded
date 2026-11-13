#include<stdio.h>

/*
	* Binary opr
		- It operates on two operand
		- e.g + - * / %  && || == != < > <= >=

		
	* Unary opr
		- It operates on single operand
		- e.g ++ -- + - ! ~ sizeof

*/


int main()
{
	/*
	int n1= +10 ;
	n1 = -10;
	*/

	/*
		++ => Increment
			1.Pre Increment
			2.Post Decrement
	*/
/*
	//1.Pre Increment
	//   - It increment the value before use
	//   - e.g   ++var
	int num1=10;
	++num1; // num1 = num1 + 1
	printf("num1 = %d \n",num1); //11
	
	printf("num1 = %d \n",++num1);//12
*/	
	//2.Post Increment
	//  - It uses the value first then it Increment
	//  - e.g var++

	int num2 = 20;
	num2++; // num2 = num2 + 1
	printf("num2 = %d \n",num2); // 21

	printf("num2 = %d \n",num2++); // 21
	printf("num2 = %d \n",num2); // 22
	return 0;
}





