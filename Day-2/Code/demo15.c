#include<stdio.h>

/*
scanf() - library function to take input from user
	syntax:
		scanf("format string", &arg1, &arg2, ...);
	format string - string containing format specifiers
	format specifiers - placeholders for variables to store input value
		%d  - for integer
		%c  - for character
		%f  - for float
		%lf - for double

*/
int main()
{
	int n1;
	char ch;
	float f1;
	double d1;
	printf("Enter int num : ");
	scanf("%d",&n1);

	printf("Enter char : ");
	scanf("%*c%c",&ch); // here * is used to ignore blank space or new line character in input buffer and %c is used to take char input from user

	printf("Enter float : ");
	scanf("%f",&f1);

	printf("Enter double : ");
	scanf("%lf",&d1);
	printf("%d %c %f  %lf \n",n1,ch,f1,d1);

	printf("Enter int char float double :");
	scanf("%d %c%f%lf",&n1,&ch,&f1,&d1);
	printf("%d %c %f  %lf \n",n1,ch,f1,d1);
	return 0;
}
