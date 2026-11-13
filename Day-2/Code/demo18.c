#include<stdio.h>

int main()
{
	/*
		-- : Decrement
			1.Pre Decrement
			2.POst Decrement
	*/
	//1.Pre Decrement
	//   - Here 1st value Decrement and then use
	//   e.g. --var;

	int num1=10;
	--num1; // num1 = num1-1
	printf("num1 = %d \n",num1);//9
	printf("num1 = %d \n",--num1);// 8

		
	//2.Post Decrement
	//   - Here 1st value use then Decrement
	//   e.g. var--;

	int num2=20;
	num2--; // num1 = num1-1
	printf("num1 = %d \n",num2);//19
	printf("num1 = %d \n",num2--);//19
	printf("Num1 = %d \n",num2); // 18

	return 0;
}
