#include<stdio.h>
#include<string.h>

/*
	size_t
	------
	size_t is an unsigned integer type used to represent size of objects in bytes.

	Generic swap function
	---------------------
	This function swaps two variables of ANY data type.

	void *ptr1 → address of first variable
	void *ptr2 → address of second variable
	size       → number of bytes to swap

	The function uses:
	- void pointer (generic pointer)
	- memcpy() to copy memory blocks
*/

//                                    size_t
//                                           4
void swap( void *ptr1 , void *ptr2 , size_t size )
{
	/*
	Create temporary memory block on heap
	to store one variable temporarily
	*/
	void *temp = malloc(size); // allocate 'size' bytes on heap

	/*
	memcpy()
	--------
	Copies 'size' bytes of memory from source to destination

	memcpy(destination , source , size);
	*/

	memcpy(temp,ptr1 , size ); // copy data from ptr1 → temp
	memcpy(ptr1,ptr2 , size ); // copy data from ptr2 → ptr1
	memcpy(ptr2,temp,  size ); // copy data from temp → ptr2

	free(temp); // free temporary heap memory
}



int main()
{
	int n1=10,n2=20;

	printf("int before swap : n1 = %d n2 = %d \n",n1,n2);

	/*
	swap integers
	sizeof(int) → number of bytes to swap
	*/
	swap(&n1, &n2 , sizeof(int));

	printf("int After swap : n1 = %d n2 = %d \n",n1,n2);



	char ch1='A',ch2='B';

	printf("char before swap : ch1 = %c ch2 = %c \n",ch1,ch2);

	/*
	swap characters
	sizeof(char) → number of bytes to swap
	*/
	swap(&ch1, &ch2 , sizeof(char));

	printf("char After swap : ch1 = %c ch2 = %c \n",ch1,ch2);



	/*
	memcpy() example with arrays

	int arr1[5]= {10,20,30,40,50};
	int arr2[5]= {0};

	int i;

	for(i=0 ; i< 5 ; i++)
	{
		printf("%d \n",arr2[i]);
	}

	printf("\n");

	memcpy(arr2 , arr1 , 16);
	// copy first 16 bytes from arr1 to arr2

	for(i=0 ; i< 5 ; i++)
	{
		printf("%d \n",arr2[i]);
	}
	*/	


	return 0;
}