#include<stdio.h>

/*
    Pointer with Different Data Types

    Important Concept:
        - Pointer type must match the type of variable.
        - Pointer stores address of specific data type.
*/

int main()
{
	int n1 = 10;
	char ch = 'A';
	float f1 = 3.142f;
	double d1 = 10.25;

	/*
	    Pointer declaration:
	    Type of pointer should match target variable type.
	*/
	int *iptr = &n1;
	char *cptr = &ch;
	float *fptr = &f1;
	double *dptr = &d1;


	//Printing integer and its pointer
	printf("n1: %d  &n1 = %lu \n", n1, &n1);
	printf("*iptr : %d  iptr : %lu  &iptr : %lu \n",*iptr,*iptr,iptr,&iptr);
	    //    *iptr,    value at address of n1
	    //    iptr,     address of n1
	    //    &iptr     address of pointer variable


	//Printing char and its pointer
	printf("ch: %c  &ch = %lu \n", ch, &ch);
	printf("*cptr : %c  cptr : %lu  &cptr : %lu \n",*cptr,cptr,&cptr);
	
	//Printing float and its pointer
	printf("f1: %.2f  &f1 = %lu \n", f1, &f1);
	printf("*fptr : %.2f  fptr : %lu  &fptr : %lu \n",*fptr,fptr,&fptr);


	//Printing double and its pointer
	printf("d1: %lf  &d1 = %lu \n", d1, &d1);
	printf("*dptr : %lf  dptr : %lu  &dptr : %lu \n",*dptr,dptr,&dptr);

	return 0;
}