#include <stdio.h>

/*
Anonymous Structure with Bit Fields

Anonymous structure means:
- Structure is declared without a tag name.
- The variable is declared directly with the structure.

Bit fields are used to store values using specific number of bits
to reduce memory usage.
*/

#pragma pack(1)
// #pragma pack(2)
// #pragma pack(4)
// #pragma pack(8)

/*
#pragma pack(n)

Controls structure padding/alignment.
pack(1) → no padding
pack(2) → align to 2 bytes
pack(4) → align to 4 bytes
pack(8) → align to 8 bytes
*/

// Anonymous structure with bit fields
// In anonymous structure, we can only declare variables at the time of structure definition.
struct
{
	unsigned int a : 3; // 3 bits → range 0–7
	unsigned int b : 5; // 5 bits → range 0–31
} v1;					// structure variable v1 is declared globally

/*
Total bits used:
a → 3 bits
b → 5 bits
----------------
Total = 8 bits = 1 byte

However compiler may allocate memory in units of int
so actual size can become 4 bytes depending on compiler.
*/

int main()
{
	// struct variable v1 is already declared globally

	printf("Size : %lu \n", sizeof(v1)); // typically 4 bytes

	/*
	Assign value larger than allowed range a uses 3 bits → max value = 7
	*/

	v1.a = 10;

	/*
			Binary representation:

			10 → 1010 (binary)

			Only last 3 bits stored:

			1010
			 ↓↓↓
			 010 → 2
*/

	printf("v1.a = > %d \n", v1.a); // 2

	return 0;
}