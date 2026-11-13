#include<stdio.h>

/*
	2D array
	--------
	- A 2D array is an array of of 1D arrays.
	- It is used to store tabular data.
	Declaration:
type arr_name[row_size][col_size];
Example:
int arr[3][2] = { {10,20} , {30,40	} , {50,60} };
Accessing elements:
arr[0][0] → 10
arr[0][1] → 20
arr[1][0] → 30
...
arr[2][1] → 60
Note:
In function parameters, column size must be specified.
void func(int arr[][2] , int row_size, int col_size);


*/


int main()
{
	/*
	//declation rules of 2D array
	int arr1[2][2] ; //Valid syntax : 2 rows and 2 columns 

	int arr2[][2] ; // Invalid syntax : column size must be specified

	int arr3[2][] ; // Invalid syntax : column size must be specified

	int arr4[2][3] ; // Valid syntax : 2 rows and 3 columns

	int arr5[2][2] = { {10,20} , {30,40} }; // Valid syntax : 2 rows and 2 columns
	//               array initilization using nested braces

	int arr6[2][2] = { 10,20,30,40 }; // Valid syntax : 2 rows and 2 columns
	//               array initilization without nested braces

	int arr7[2][2] = { {10} , {30} }; // Valid syntax : 2 rows and 2 columns
	//               only first element of each row is initialized, rest will be 0
	//
	// 	arr7[0][0] =    {  10  ,  0 
	// 	                   30  ,  0 };
	// 
	int arr8[][2] = { 10,20,30,40 }; // Valid syntax : 2 rows and 2 columns

	*/

	//                col0   col1   col2
	int arr[3][3] = { {10,   20,    30} ,  //Row 0
					// 00    01     02    ->index of elements in row 0
					//100    104     108  -> address of elements in row 0 
	                  {40,   50,    60} ,  //Row 1
					// 10    11     12    ->index of elements in row 1
					//112    116     120  -> address of elements in row 1
					  {70,   80,    90}    //Row 2
					// 20    21     22    ->index of elements in row 2
					//124    128     132  -> address of elements in row 2

					};
	

	// Accessing elements of 2D array
	printf("arr[0][0] = %d \n",arr[0][0]); // 10
	printf("arr[0][1] = %d \n",arr[0][1]); // 20
	printf("arr[0][2] = %d \n",arr[0][2]); // 30	

	printf("arr[1][0] = %d \n",arr[1][0]); // 40
	printf("arr[1][1] = %d \n",arr[1][1]); // 50
	printf("arr[1][2] = %d \n",arr[1][2]); // 60

	printf("arr[2][0] = %d \n",arr[2][0]); // 70
	printf("arr[2][1] = %d \n",arr[2][1]); // 80
	printf("arr[2][2] = %d \n",arr[2][2]); // 90		

	//print elemets using nested loops
	int i,j;
	for(i=0 ; i < 3 ; i++) // Traverse rows
	{
		for(j=0 ; j < 3 ; j++) // Traverse columns
		{
			printf("arr[%d][%d] = %d \n",i,j,arr[i][j]);
		}
	}


	return 0;
}s?>nnnnnnnnnnnnnnnnnnnnnnnnnnn
