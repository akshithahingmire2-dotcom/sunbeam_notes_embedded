#include<stdio.h>

//Check the num of days in given month:
// 1 3 5 7 8 10 12 -> 31 days
// 4 6 9 11 -> 30 days
// 2 -> 28/29 days
int main()
{
	int month;
	printf("Enter the month : ");
	scanf("%d",&month);

	if ( month == 1 )
		printf("Jan has 31 days\n");
	else if(month == 2)
		printf("Feb Has 28/29 days\n");
	else if(month == 3 )
		printf("March has 31 days\n");
	//...
	else
		printf("Invalid month \n");

	return 0 ;
}
