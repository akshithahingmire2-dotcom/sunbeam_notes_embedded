#include<stdio.h>
#include<string.h>

struct date
{
    int dd;
    int mm;
    int yy;
};
typedef struct employee
{
    int id;
    char name[20];
    char dept[20];
    float salary;
    struct date dob;
}emp_t;

void accept_emp(emp_t *e1);
void add_employee_file(emp_t *e1);
void print_emp(emp_t e1);
void display_employee_file(void);
void search_emp_by_id(int id);
void search_emp_by_name(char *str);
void update_emp_by_id(int id);
void delete_emp_by_id(int id);


int main()
{
   int ch;
   emp_t e1;
   int id;

   do
   {
        printf("Welcome To Employee Management System..\n");
        printf("0.Exit\n1.Add Employee\n2.Display Employee\n3.Search By ID \n4.Search by name \n5.Update Employee info Using ID\n6.Delete employee using ID\n7.Total Employee\n");
        printf("Your Choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 0:printf("Exit\n");
                   break;
            case 1:printf("------------------------------------------------------------------------\n");
                   accept_emp(&e1);
                   add_employee_file(&e1);
                   printf("------------------------------------------------------------------------\n");                    
                   break;
                   
            case 2:printf("------------------------------------------------------------------------\n");
                   printf("All Employee Info : \n");
                   printf("------------------------------------------------------------------------\n");
                   display_employee_file();
                   printf("------------------------------------------------------------------------\n");                 
                   break;
            case 3:printf("------------------------------------------------------------------------\n");
                    printf("Search By ID\n");
                   printf("Enter the ID to search : ");
                   scanf("%d",&id);
                   search_emp_by_id(id);
                   printf("------------------------------------------------------------------------\n");
                   break;
            case 4:printf("------------------------------------------------------------------------\n");
                   char str[20];
                   printf("Enter the name to search : ");
                   scanf("%*c%s",str);
                   search_emp_by_name(str);
                   printf("------------------------------------------------------------------------\n");
                   break;
            case 5:printf("------------------------------------------------------------------------\n");
                    printf("Update emp By ID\n");
                    printf("Enter the ID to update : ");
                    scanf("%d",&id);
                    update_emp_by_id(id);
                   printf("------------------------------------------------------------------------\n");
                   break;
            case 6:printf("------------------------------------------------------------------------\n");
                   printf("Delete emp By ID\n");
                   printf("Enter the ID to Delete : ");
                   scanf("%d",&id);
                   delete_emp_by_id(id);
                   printf("------------------------------------------------------------------------\n");
                   break;
            
            default:
                break;
        }
   } while (ch != 0);
    return 0;
}
void accept_emp(emp_t *e1)
{
    printf("Enter Id of Employee : ");
    scanf("%d",&e1->id);
    printf("Enter the Name of Empoyee  : ");
    scanf("%*c%s",&e1->name);
    printf("Enter the Dept of Empoyee  : ");
    scanf("%*c%s",&e1->dept);
    printf("Enter the Salary of Empoyee  : ");
    scanf("%f",&e1->salary);
    printf("Enter the DOB of Empoyee (DD MM YY) : ");
    scanf("%d%d%d",&e1->dob.dd,&e1->dob.mm,&e1->dob.yy);
}
void add_employee_file(emp_t *e1)
{
    FILE *fp = fopen("emp.db","ab");
    if(fp == NULL)    {
        printf("Unable to open file\n");
        return;
    }   
    int ret = fwrite(e1,sizeof(emp_t),1,fp);
    if(ret == 0) {
        printf("Error while writing to file\n");
    } else {
        printf("Employee Added Successfully\n");
    }
    fclose(fp);
}

void print_emp(emp_t e1)
{
    printf("Employee ID : %d \n",e1.id);
    printf("Name : %s Dept: %s Salary: %.2f DOB: %d-%d-%d\n",e1.name,e1.dept,e1.salary,e1.dob.dd,e1.dob.mm,e1.dob.yy);
}

void display_employee_file(void)
{
    emp_t e1;
    FILE *fp = fopen("emp.db","rb");
    
    while( (fread(&e1,sizeof(e1),1,fp)) != 0 )
    {
        print_emp(e1);
    }

    fclose(fp);

}

void search_emp_by_id(int id)
{
    emp_t e1;
    FILE *fp = fopen("emp.db","rb");
    
    while( (fread(&e1,sizeof(e1),1,fp)) != 0 )
    {
       if(e1.id == id)
       {
            printf("Employee Found : \n");
            print_emp(e1);
            return;
       }
    }
    printf("Sorry Employee Not Found : \n");
    fclose(fp);
}
void search_emp_by_name(char *str)
{
    emp_t e1;
    FILE *fp = fopen("emp.db","rb");
    
    while( (fread(&e1,sizeof(e1),1,fp)) != 0 )
    {
       if(strcmp(e1.name,str) == 0)
       {
            printf("Employee Found by name: \n");
            print_emp(e1);
            return;
       }
    }
    printf("Sorry Employee Not Found : \n");
    fclose(fp);

}

void update_emp_by_id(int id)
{
    emp_t e1;
    FILE *fp = fopen("emp.db","rb+");
    
    while( (fread(&e1,sizeof(e1),1,fp)) != 0 )
    {
       if(e1.id == id)
       {
            printf("Employee Found : \n");
            print_emp(e1);
            float sal;
            printf("Enter new sal : ");
            scanf("%f",&sal);
            e1.salary = sal;
            fseek(fp, -1 * sizeof(e1), SEEK_CUR);
            fwrite(&e1,sizeof(e1),1,fp);
            printf("Employee Updated Sucsessfully... \n");
            fclose(fp);
            return;
       }
    }
    printf("Sorry Employee Not Found : \n");
    fclose(fp);
}


// void delete_emp_by_id(int id)
// {
//     emp_t e1;
//     FILE *src = fopen("emp.db","rb");
//     FILE *dest = fopen("temp.db","wb");
    
//     while( (fread(&e1,sizeof(e1),1,src)) != 0 )
//     {
//        if(e1.id != id)
//        {
//           fwrite(&e1,sizeof(e1),1,dest);
//        }
//     }
//     //printf("Sorry Employee Not Found : \n");

//     fclose(src);
//     fclose(dest);

//     remove("emp.db");
//     rename("temp.db","emp.db");
// }

void delete_emp_by_id(int id)
{
     emp_t e1;
     FILE *fp = fopen("emp.db","rb+");
    
     while( (fread(&e1,sizeof(e1),1,fp)) != 0 )
     {
        if(e1.id == id)
        {
             while(fread(&e1, sizeof(e1), 1, fp) != 0)
                {
                    fseek(fp, -2 * sizeof(e1), SEEK_CUR);
                    fwrite(&e1, sizeof(e1), 1, fp);
                    fseek(fp, +1 * sizeof(e1), SEEK_CUR);
                }
                break;
        }
     }
    fseek(fp, -1 * sizeof(e1), SEEK_END);
	int pos = ftell(fp);
	printf("%d\n", pos);
	fclose(fp);
	truncate("books.txt", pos);

 }

