#include <stdio.h>

typedef struct 
{
    char name[30];
    int roll;
    float marks;
} stStudent;
 

int main()
{
    stStudent student;
    printf("Enter information of students: \n\n");
    printf("Enter Name: ");
    scanf("%s",&student.name);
    printf("Enter roll number: ");
    scanf("%d",&student.roll);
    printf("Enter marks: ");
    scanf("%f",&student.marks);
    printf("\n");
    printf("Displaying Information\n");
    printf("name: %s \nRoll: %d \nmarks: %0.2f" ,student.name,student.roll,student.marks);
    return 0;
}