#include<stdio.h>

//Problem statment
//  write a program to allocate memory on heap for given 'size' number.
//   - write a function to assign values to allocated memory and print those values.
//   - free the allocated memory after use.

void accept_array(int *ptr , int size)
{
	printf("Enter %d integers : ",size);
	for(int i=0 ; i<size ; i++)
	{
		scanf("%d",&ptr[i]);
	}
}

void print_array(int *ptr , int size)
{
	printf("Elements in array : ");
	for(int i=0 ; i<size ; i++)
	{
		printf("%d ",ptr[i]);
	}
	printf("\n");

}

int main()
{
	int size;
	printf("Enter the size : ");
	scanf("%d",&size);
	int *ptr = malloc( sizeof(int) * size);
	if(ptr == NULL)
	{
		printf("Malloc() failed..\n");
		return  0; // terminate program
	}
	accept_array(ptr,size);
	print_array(ptr,size);

	free( ptr );
	return 0;
}
