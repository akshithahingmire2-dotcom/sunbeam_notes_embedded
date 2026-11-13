#include<stdio.h>
#include<stdlib.h>

/*
	2D Array using Pointer Notation

	Important Concept:

	arr[i][j]  can also be written as:

	*(*(arr + i) + j)

	Explanation:
	------------
	arr       → base address of 2D array
	arr + i   → address of ith row
	*(arr+i)  → base address of ith row
	*(arr+i)+j → address of jth column in ith row
	*(*(arr+i)+j) → value stored at arr[i][j]
*/

int main()
{
	int arr[3][3]; // 2D array declaration (3 rows × 3 columns)

	printf("Accept value in 2D array using Pointer notation:");

	int i ,  j;

	// Accept values using pointer notation
	for( i = 0 ; i <  3 ; i++)
	{
		for(j=0 ; j < 3 ; j++)
		{
			printf(" (*(arr+%d))+%d : ",i,j);

			/*
				arr[i][j]  ==  *(*(arr+i)+j)

				Here we pass address of element using:
				(*(arr+i) + j)
			*/

			scanf("%d", (*( arr + i) + j ));
		}
	}

	printf("Dispaly the values : \n");
	
	// Print values using pointer notation
	for( i = 0 ; i <  3 ; i++)
	{
		for(j=0 ; j < 3 ; j++)
		{
			printf(" *(*(arr+%d))+%d) :%d \n ",i,j,   *(*(arr+i)+j) );

			/*
				*(*(arr+i)+j)
				→ access value stored at arr[i][j]
			*/
		}
	}

	return 0;
}