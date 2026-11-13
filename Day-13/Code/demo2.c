#include<stdio.h>

// Macro definition
// SIZE is used to define the size of array
// During preprocessing, SIZE will be replaced with 3
#define SIZE 3

// Function declarations
// Function to accept array elements from user
void accept_arr(int arr[]);

// Function to display array elements
void display_arr(int arr[]);

int main()
{
	// Array declaration of size SIZE (3 elements)
	int arr[SIZE];

	// Passing array to function to store values
	accept_arr(arr);

	// Passing array to function to print values
	display_arr(arr);

	return 0;
}

// Function definition to accept array elements
// arr[] receives the base address of array from main()
void accept_arr(int arr[])
{
	int i;

	// Loop runs SIZE times to input elements
	for(i=0 ; i < SIZE ; i++)
	{
		printf("Enter the %d index value : ",i);

		// Store value at arr[i]
		scanf("%d",&arr[i]);
	}
}

// Function definition to display array elements
// arr[] again receives base address of same array
void display_arr(int arr[])
{
	int i;

	// Loop runs SIZE times to print elements
	for(i=0 ; i < SIZE ; i++)
	{
		printf("arr[%d ] = %d \n",i,arr[i]);
	}
}