#include<stdio.h>
// Demo to show invalid usage of break statement
int main()
{	
	//-----------------------------
	break;  
	/*
	    ERROR:
	    break cannot be used here.

	    break is valid only inside:
	        - loop (for, while, do-while)
	        - switch-case

	    Here it is outside any loop or switch,
	    so compiler will give error:
	    "break statement not within loop or switch"
	*/
	//-----------------------------

	if(1)
	{
		break;
		/*
		    ERROR:
		    Even though this is inside if block,
		    it is NOT inside a loop or switch.

		    break cannot be used only with if.
		*/
	}

	while(1)
	{
		if(1)
		{
			break;   //VALID
			/*
			    This is correct usage.
			    break exits the nearest loop (while).
			*/
		}


	return 0;
}