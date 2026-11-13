#include<stdio.h>

// Macro constant
// PI will be replaced by 3.142 during preprocessing
#define PI 3.142

// Function-like macro
// sqr(n) calculates square of given value
// Wherever sqr(n) is used, it expands to (n)*(n)
#define sqr(n) (n)*(n)

int main()
{

	// Calculate area of circle
	// Formula: Area = PI * r * r

	int rad;   // variable to store radius

	printf("Enter the radious : ");
	scanf("%d",&rad);   // user enters radius

	// sqr(rad) will expand to (rad)*(rad)
	// PI will expand to 3.142
	float res = PI * sqr(rad) ;

	// After preprocessing (.i file) this becomes:
	// res = 3.142 * (rad)*(rad);

	printf("Res : %.2f \n",res);  // prints area of circle

	return 0;   
}