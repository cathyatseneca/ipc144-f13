#include <stdio.h>
#include <string.h>
//things we need to know about a student
//last name
//first name
//student number
//student computer id
//program
//year
//courses
//age
//address
//gpa
//phone number
//...

//the following struct is essentially a data type specification
//
struct Student{
	char name[41];      //name, program, semester, gpa, data members
	char program[11];
	int semester;
	double gpa;
};

//write a function that will print a student
//in the form:  Student name, program-semester
//on the next line GPA: gpa
void printStudent(struct Student* st);

int main(void){
   struct Student st1;
   //make st1 store, huey hamster for name, cpa program, semester 1, gpa 3.0
   strcpy(st1.name,"huey hamster");
   strcpy(st1.program,"cpa");
   st1.semester = 1;
   st1.gpa=3.0;

   struct Student st2;
   printf("enter a name: ");
   scanf("%[^\n]", st2.name);
   printf("enter a program: ");
   scanf(" %[^\n]", st2.program);
   printf("enter the semester: ");
   scanf("%d",&st2.semester);
   printf("enter the gpa: ");
   scanf("%lf",&st2.gpa);

   printStudent(&st1);
   printStudent(&st2);
}

//in the form:  Student name, program-semester
//on the next line GPA: gpa
void printStudent(struct Student* st){
	printf("%s, %s-%d\n",st->name,st->program,st->semester);
	printf("GPA: %.2lf\n",st->gpa);
}







