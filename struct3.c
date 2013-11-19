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

   int numStudents=0;
   int numRead;
   FILE* fp=fopen("students.txt","r");
   numRead=fscanf(fp,"%[^;];%[^,],%d,%lf\n",allStudents[numStudents].name,
                                    allStudents[numStudents].program,
                                    &allStudents[numStudents].semester,                                    
                                    &allStudents[numStudents].gpa);
   while(numRead==4){
      numStudents++;

      numRead=fscanf(fp,"%[^;];%[^,],%d,%lf\n",allStudents[numStudents].name,
                                    allStudents[numStudents].program,
                                    &allStudents[numStudents].semester,                                    
                                    &allStudents[numStudents].gpa);

    }
   int i;
   for(i=0;i<numStudents;i++){
      printStudent(&allStudents[i]);
   }
}

//in the form:  Student name, program-semester
//on the next line GPA: gpa
void printStudent(struct Student* st){
	printf("%s, %s-%d\n",st->name,st->program,st->semester);
	printf("GPA: %.2lf\n",st->gpa);
}







