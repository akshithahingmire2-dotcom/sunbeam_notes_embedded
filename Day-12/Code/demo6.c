#include<stdio.h>

/*
Bit fields in structure

Purpose:
--------
- Bit fields allow storing data using a specific number of bits.
- They help optimize memory usage.
- Useful when storing small numeric values like date, flags, status etc.

Example:
Instead of using 3 integers (12 bytes), we store date fields using bits.

Rules for bit fields:
1. Bit fields must be of type int, signed int, unsigned int, or _Bool.
2. Address (&) operator cannot be applied to bit fields.
3. Bit fields cannot be arrays.
*/

#pragma pack(1)
/*
#pragma pack(1)
Forces compiler to remove padding between members.
Ensures compact memory layout.
*/

typedef struct date
{
	unsigned int dd : 5;  // 5 bits for day (0–31)
	unsigned int mm : 4;  // 4 bits for month (0–15)
	unsigned int yy : 12; // 12 bits for year (0–4095)
}date_t; //-------------------------
//           total bits : 21
//                 bytes:  3
//-----------------------------------


int main()
{
	/*
	Structure variable declaration
	*/

	//date_t d1 = { 9 , 3 , 2026};

	date_t d1;

	/*
	Assign values to bit fields
	*/

	d1.dd=9;
	d1.mm=3;
	d1.yy=2026;

	int date = 32;

	//printf("Enter the date : ");
	//scanf("%d",&date);

	/*
	Assigning value larger than allowed range

	5 bits → maximum value = 31
	32 will overflow and wrap around.
	*/

	d1.dd = date ;

	/*
	We cannot use scanf directly like this:

	scanf("%d%d%d",&d1.dd,&d1.mm,&d1.yy);

	because address operator (&) is not allowed on bit fields.
	*/

	printf("Date : %d %d %d \n",d1.dd, d1.mm , d1.yy);
	
	/*
	Print size of structure
	*/

	printf("size : %u \n",sizeof(d1));

	return 0;
}