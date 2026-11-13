#include<stdio.h>

/*
	return value of
		- printf()
			- it returns number of character printed on console
		- scanf()
			- it returns number of input value successfully assigned to variable
*/
int main()
{
	int num = printf("Sunbeam\n");
	printf("num= %d \n",num); // 8 (7 character in Sunbeam and 1 character in \n)

	int n1,n2,n3;
	num = scanf("%d%d%d",&n1,&n2,&n3);
	printf("num= %d \n",num);// here num will be 3 because 3 input value is successfully assigned to variable n1,n2 and n3	

	return 0;
}
