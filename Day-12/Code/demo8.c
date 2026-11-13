#include<stdio.h>

// Union declaration
union demo
{
	char ch;     // 1 byte
	int n1;      // 4 bytes
	double d1;   // 8 bytes
};

/*
Union Characteristics
---------------------
1. All members share the same memory location.
2. Only one member can store a valid value at a time.
3. Size of union = size of largest member.
4. Modifying one member will affect the value of other members since they share memory.
5. Useful for memory optimization when you need to store different types of data but only one type at a time.
*/

int main()
{
	union demo v1;

	/*
	sizeof(v1)

	char   → 1 byte
	int    → 4 bytes
	double → 8 bytes

	So union size = 8 bytes (largest member)
	*/

	printf("v1 : %lu \n",sizeof(v1));

	/*
	Store value in member ch
	*/

	v1.ch = 'A';

	printf("v1.ch : %c \n",v1.ch);

	/*
	Now assign value to n1

	Since all members share the same memory,
	this overwrites the previous value stored in ch.
	*/

	v1.n1= 90;

	printf("v1.ch : %c , v1.n1 : %d \n",v1.ch,v1.n1);
	// v1.ch prints ASCII character corresponding to integer value
	// 90 → 'Z'

	/*
	Now assign value to double member
	This overwrites memory again.
	*/

	v1.d1 = 3.14;

	printf("v1.ch : %c , v1.n1 : %d v1.d1 : %.2lf \n",v1.ch,v1.n1 , v1.d1);
	// v1.ch and v1.n1 show garbage because memory now contains double value
	// Only v1.d1 is valid

	return 0;
}