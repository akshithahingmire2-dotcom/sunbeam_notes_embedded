#include"header.h"

int main()
{	
	int res = addition();
	printf("res : %d \n",res);

	/*
	int temp=accept(); // ERROR: accept() is a static function defined in fun.c
	printf("temp : %d \n",temp);
	*/	

return 0;
}

/*
Compile: gcc main.c fun.c
Run: ./a.out
*/

