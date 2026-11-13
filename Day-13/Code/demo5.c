#include<stdio.h>

int main()
{

	// __LINE__
	// Predefined macro that expands to the current line number
	// where it is used in the source file
	printf("Line : %d \n",__LINE__);

	// __FILE__
	// Predefined macro that expands to the name of the current
	// source file being compiled
	printf("File : %s \n",__FILE__);

	// __DATE__
	// Predefined macro that expands to the compilation date
	// Format example: "Mar 10 2026"
	printf("DATE : %s \n",__DATE__);

	// __TIME__
	// Predefined macro that expands to the compilation time
	// Format example: "17:35:10"
	printf("TIME : %s \n",__TIME__);

	return 0;  
}