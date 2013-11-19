#include <stdio.h>
#include <string.h>

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
void readStudent(struct Student* st);
int main(void){

   //note that the syntax is the same
   //for declaring arrays of basic data types
   //and arrays of structs
   struct Student allStudents[500];
   //an int array of 500 elememts is:
   //int arrayName[500];
   //the data type is struct Student
   //the array name is allStudents

   int keepGoing=1;
   int numStudents=0;

   while(keepGoing){
      readStudent(&allStudents[numStudents++]);
      printf("Do you want to go again?  (0 for no)");
      scanf("%d",&keepGoing);
   }

   int i;
   for(i=0;i<numStudents;i++){
      printStudent(&allStudents[i]);
   }
}
void readStudent(struct Student* st){

   printf("enter a name: ");
   scanf(" %[^\n]", st->name);
   printf("enter a program: ");
   scanf(" %[^\n]", st->program);
   printf("enter the semester: ");
   scanf("%d",&st->semester);
   printf("enter the gpa: ");
   scanf("%lf",&st->gpa);   
}

//in the form:  Student name, program-semester
//on the next line GPA: gpa
void printStudent(struct Student* st){
	printf("%s, %s-%d\n",st->name,st->program,st->semester);
	printf("GPA: %.2lf\n",st->gpa);
}







