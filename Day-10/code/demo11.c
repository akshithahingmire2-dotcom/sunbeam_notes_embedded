#include<stdio.h>

/*
 Accepting values for 2D array from user and printing them.
*/


int main()
{
	int arr[3][2];

	printf("enter values...\n");
	int i,j;
	for(i=0 ; i < 3 ; i++) // Traverse rows
	{
		for(j=0 ; j < 2 ; j++) // Traverse columns	
		{
			printf("arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}	

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
}
