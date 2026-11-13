#include<stdio.h>
/*
	*Controll Statment
		1.Decision Controll
			-if , if-else, if-else if -else
			- switch case
		2.Loop/Itrator
			- for loop
			- while loop
			- do-while loop
		3.Jump statment
			- goto
			- break
			- continue
			- return
	
1.Decision Controll
	syntax of if
	if( condition )
	{
		//If block executes when condition is true
		statments;
	}
	//{ } is optional when if block has only one statment

	//----------------------------------------------------------------
	syntax of if-else
	if( condition )
	{
		//If block executes when condition is true
		statments;
	}
	else
	{
		//else block executes when condition is false
		statments;
	}
	//------------------------------------------------------------------
	syntax of if-else if-else
	if( condition1 )
	{
		//If block executes when condition1 is true
		statments;
	}
	else if( condition2 )
	{	
		//else if block executes when condition2 is true
		statments;
	}
	...
	...
	else
	{
		//else block executes when all condition1 and condition2 are false
		statments;
	}
*/

int main()
{
	//1.Check given num is +ve or not
	int num;
	printf("Enter the num : ");
	scanf("%d",&num);

	if ( num > 0)
	{
		printf("%d : Num is +ve num\n",num);
	}
	return 0 ;
}








