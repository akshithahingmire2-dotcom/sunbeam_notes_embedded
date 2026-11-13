#include<stdio.h>

/*
	Pointer Arithmetic
	
	ptr + n
	→ ptr + ( sizeof(data_type) * n ) Or ptr + (n * scale_factor)

	ptr - n
	→ ptr - ( sizeof(data_type) * n ) Or ptr - (n * scale_factor)


*/

int main()
{
	/*
		Assume:
		sizeof(int) = 4 bytes so scale factor = 4
	*/

	int *ptr = 100;   

	printf("%lu + 1 : %lu \n", ptr, ptr + 1 ); // 104
	// ptr + 1 means:
	// ptr + (sizeof(int) * 1)
	// ptr + (4 * 1)
	// ptr + (4 * 1) means:
	// 100 + (4 * 1) = 104
	//                              100 + (4 * 1) = 104
	printf("%lu + 2 : %lu \n", ptr, ptr + 2 ); // 108
	//                              100 + (4 * 2)
	printf("%lu + 3 : %lu \n", ptr, ptr + 3 ); // 112
	//							    100 + (4 * 3)
	printf("%lu + 4 : %lu \n", ptr, ptr + 4 ); // 116
	//							    100 + (4 * 4)
	printf("%lu + 5 : %lu \n", ptr, ptr + 5 ); // 120
	//                              100 + (4 * 5)

	int *ptr1 = 200;

	printf("%lu - 1 : %lu \n", ptr1, ptr1 - 1 ); // 196
	// ptr1 - 1 means:
	// ptr1 - (sizeof(int) * 1)
	// ptr1 - (4 * 1)
	// ptr1 - (4 * 1) means:
	// 200 - (4 * 1) = 196
	//                              200 - (4 * 1) = 196

	printf("%lu - 2 : %lu \n", ptr1, ptr1 - 2 ); // 192
	//							  200 - (4 * 2) = 192
	printf("%lu - 3 : %lu \n", ptr1, ptr1 - 3 ); // 188
	//							  200 - (4 * 3) = 188
	printf("%lu - 4 : %lu \n", ptr1, ptr1 - 4 ); // 184
	//							  200 - (4 * 4) = 184
	printf("%lu - 5 : %lu \n", ptr1, ptr1 - 5 ); // 180
	//							  200 - (4 * 5) = 180


	/*
		Invalid Pointer Operations
	*/

	int *ptr3 = 10;

	// printf("%lu * 2 : %lu \n", ptr3, ptr3 * 2 ); //  Invalid
	// printf("%lu / 2 : %lu \n", ptr3, ptr3 / 2 ); //  Invalid
	// printf("%lu %% 2 : %lu \n", ptr3, ptr3 % 2 ); // Invalid

	/*
		Allowed pointer arithmetic:
			- ptr + n
			- ptr - n
			- ptr1 - ptr2 (if same array)

		Not Allowed:
			- ptr * n
			-ptr / n
			- ptr % n
	*/

	return 0;
}