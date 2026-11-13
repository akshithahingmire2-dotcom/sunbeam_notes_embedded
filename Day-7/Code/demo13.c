#include<stdio.h>

int main()
{
	//int arr1[];   //  ERROR : 


	int arr[5];   // Declaration of array (size = 5)
	int i;
	
	//Taking input from user
	printf("Enter 5 integer values : \n");
	for(i = 0; i < 5; i++)
	{
		printf("Enter %d index value : ", i);
		scanf("%d", &arr[i]);   // Store value at index i
	}


	// Printing array elements
	// Using loop to access array elements
	printf("Array elements are : \n");
	for(i = 0; i < 5; i++)
	{
		printf("arr[%d] = %d \n", i, arr[i]);
	}


	//-----------------------------------------------------------
	/*
		Array Initialization

		1. All elements initialized
			int arr[5] = {10, 20, 30, 40, 50};

		2. Partial initialization
			int arr[5] = {10, 20};

			Remaining elements are automatically initialized to 0.

		3. No initialization
			int arr[5];

			Local array elements are NOT initialized.
			They contain garbage values.
	*/
	/*
	int arr[5];   // No initialization

	for(i = 0; i < 5; i++)
	{
		printf("arr[%d] = %d \n", i, arr[i]);
	}
	Explanation:
		Local array elements are NOT initialized.
		They contain garbage values.
	*/


	/*
	int arr[5] = {10}; //Partial initialization

	for(i = 0; i < 5; i++)
	{
		printf("arr[%d] = %d \n", i, arr[i]);
	}

	Output:
		arr[0] = 10
		arr[1] = 0
		arr[2] = 0
		arr[3] = 0
		arr[4] = 0

	Explanation:
		If fewer values are given,
		remaining elements are automatically initialized to 0.
	*/

	return 0;
}