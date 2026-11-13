#include<stdio.h>
#include<unistd.h>

typedef struct student{
	int rollno;
	char name[20];
	float marks;
}stud_t;

void add_student(stud_t *s)
{
	FILE *fp = fopen("students.db", "ab");
	fwrite(s, sizeof(stud_t), 1, fp);
	fclose(fp);
}

void print_students()
{
	FILE *fp = fopen("students.db", "rb");
	stud_t s;
	while(fread(&s, sizeof(stud_t), 1, fp) != 0)
		printf("%d %s %f\n", s.rollno, s.name, s.marks);

	fclose(fp);
}

void edit_student(int rollno, float new_marks)
{
	FILE *fp = fopen("students.db", "rb+");
	stud_t s;
	while(fread(&s, sizeof(stud_t), 1, fp) != 0)
	{
		if(rollno == s.rollno)
		{
			s.marks = new_marks;
			fseek(fp, -1 * sizeof(stud_t), SEEK_CUR);
			fwrite(&s, sizeof(stud_t), 1, fp);
			break;
		}
	}
	fclose(fp);
}

void delete_student(int rollno)
{
	FILE *fp = fopen("students.db", "rb+");
	stud_t s;
	while(fread(&s, sizeof(stud_t), 1, fp) != 0)
	{
		if(rollno == s.rollno)
		{
			while(fread(&s, sizeof(stud_t), 1, fp) != 0)
			{
				fseek(fp, -2 * sizeof(stud_t), SEEK_CUR);
				fwrite(&s, sizeof(stud_t), 1, fp);
				fseek(fp, +1 * sizeof(stud_t), SEEK_CUR);
			}
			break;
		}
	}
	fseek(fp, -1 * sizeof(stud_t), SEEK_END);
	int length = ftell(fp);
	printf("lenngth = %d\n", length);
	fclose(fp);
	truncate("students.db", length);
}
int main(void)
{
	stud_t s1 = {1, "abc", 75.0f};
	add_student(&s1);	

	stud_t s2 = {4, "xyz", 84.0f};
	add_student(&s2);	

	stud_t s3 = {3, "mno", 78.5f};
	add_student(&s3);	
	
	stud_t s4 = {7, "pqr", 90.5f};
	add_student(&s4);	
	
	print_students();

	printf("-------------------\n");
	//edit_student(3, 60.5f);
	delete_student(4);


	print_students();

	return 0;
}







