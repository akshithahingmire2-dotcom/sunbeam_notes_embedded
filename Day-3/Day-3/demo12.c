#include<stdio.h>

/*
	Nested if-else
	syntax:
	if( condition1 )
	{
		if( condition2 )
		{					
			statments; // when condition1 and condition2 are true
		}
		else
		{
			statments; // when condition1 is true and condition2 is false
		}
	}
	else
	{
		if( condition3 )				
		{
			statments; // when condition1 is false and condition3 is true
		}
		else
		{
			statments; // when condition1 and condition3 are false
		}
	}		

*/
//Accept three num and check which is greater

int main()
{
	int n1, n2,n3;
	printf("Enter 3 value : ");
	scanf("%d%d%d",&n1,&n2,&n3);
	//  10  20  30
	// 100  500  200
	//1000 550 450
	//  100 > 500
	// 1000 > 550
	if( n1 > n2)
	{
		//n1 is grater
		//1000>450
		if(n1 > n3)
			printf("%d : n1 is grater \n",n1);//1000
		else
		{
			printf("%d : n3 is grater\n",n3);
		}
	}
	else
	{
		//n2 is grater
		//  20 > 30
		//  500>  200
		if( n2 > n3 )
			printf("%d : n2 is grater\n",n2);
		else
			printf("%d : n3 is grater\n",n3);// 30
	}
	return 0 ;
}






