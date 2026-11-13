#include<stdio.h>
#include<stdlib.h>

/*
    create array of structre
        - write function for accept student
        - write function for print student
        - write function for search by roll student

*/


// Structure declaration using typedef
typedef struct student //
{
	int roll;       // 4 bytes → roll number
	char name[20];  // 20 bytes → student name
	float per;      // 4 bytes → percentage
}stud_t;  // stud_t → alias name for struct student


void accept_student( struct student arr[], int size);
void print_student(struct student arr[], int size);

int main()
{
	stud_t arr[3]; // array of 3 students

    // Accept student details
    accept_student(arr , 3);
    
    // Display student details
    print_student(arr , 3);

    //Search and display students with roll
    int search_roll = 22;
    printf("Searching for student with roll number %d...\n", search_roll);
    search_student(arr, 3, search_roll);

	return 0;
}

void accept_student( struct student arr[], int size)
{
    int i;

    for(i=0 ; i < size ; i++)
    {
        printf("Enter Roll, Name , Per for student %d : ",i+1);

        scanf("%d%*c%s%f",&arr[i].roll,arr[i].name,&arr[i].per);
    }
}

void print_student(struct student arr[], int size)
{
    int i;

    for(i=0 ; i < size ; i++)
    {
        printf("Roll :%d Name : %s Per : %.2f \n",arr[i].roll,arr[i].name,arr[i].per);
    }
}

void search_student(struct student arr[], int size, int roll)
{
    int i;

    for(i=0 ; i < size ; i++)
    {
        if(arr[i].roll == roll)
        {
            printf("Student found: Roll :%d Name : %s Per : %.2f \n",arr[i].roll,arr[i].name,arr[i].per);
            return;
        }
    }
    printf("Student with roll number %d not found.\n", roll);
}   