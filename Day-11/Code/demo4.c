#include<stdio.h>
#include<stdlib.h>

/*
	assigning 2D array to pointer

	Concept:
	--------
	A 2D array can be assigned to a pointer that points
	to an array of columns.

	Syntax:
	int (*ptr)[col] = arr;

	ptr → pointer to array of 'col' integers

	arr decays to address of its first row.
*/

int main()
{
	int row=2,col=2,i,j;

	// 2D array initialization
	int arr[2][2]={ {10 , 20 },{ 30 , 40}};

	/*
	ptr is pointer to array of 2 integers

	arr → base address of first row
	ptr → points to arr[0]
	*/

	int (*ptr)[2] = arr;

	/*
	Memory representation:

	arr
	--------------------------------
	arr[0][0]   arr[0][1]
	arr[1][0]   arr[1][1]
	--------------------------------
	*/

	//accept value
	for(i=0 ; i < row ; i++)
	{
		for(j = 0 ; j < col ; j++)
		{
			//printf("ptr[%d][%d] : ",i,j);
			//scanf("%d",&ptr[i][j]);

			/*
			ptr + i      → address of ith row
			*(ptr + i)   → base address of row
			*(ptr + i)+j → address of element arr[i][j]
			*/

			printf(" *(ptr + %d) + %d  : ",i,j);

			scanf("%d",*(ptr+i)+j);
		}
	}

	//display array values
	for( i = 0 ; i <  row ; i++)
	{
		for(j=0 ; j < col ; j++)
		{
			//printf("ptr[%d][%d]  : %d  \n",i,j,ptr[i][j]);

			printf(" *(*(ptr + %d) + %d) : %d \n",i,j,*(*(ptr+i)+j));

			/*
			*(*(ptr+i)+j)
			→ value stored at arr[i][j]
			*/
		}
	}

	return 0;
}