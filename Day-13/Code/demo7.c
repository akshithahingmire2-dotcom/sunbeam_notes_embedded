#include<stdio.h>

// Macro definition
// SIZE is replaced by 10 during preprocessing
#define SIZE 10

int main()
{
	// SIZE expands to 10
	printf("size : %d \n",SIZE); // 10

	// Remove previously defined macro SIZE
	// After this line SIZE is no longer defined
	#undef SIZE

	// Redefine SIZE macro with new value
	#define SIZE 20

	// Now SIZE expands to 20
	printf("Size : %d \n",SIZE);//20

	return 0;   // program termination
}