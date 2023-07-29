#include <stdio.h>

typedef struct 
{
    char name[30];
    int roll;
    float marks;
} stStudent;
 

int main()
{
    stStudent students[10];
    printf("Enter information of students:\n\n");
    for(int i = 0 ; i < 10 ; i++)
    {
        students[i].roll = i + 1;
        printf("For roll number %d\n" , students[i].roll);
        printf("Enter name: ");
        scanf("%s",&students[i].name);
        printf("Enter marks: ");
        scanf("%f",&students[i].marks);
        printf("\n");
    }
    printf("Displaying information of of students\n\n");
    for(int i = 0 ; i < 10 ; i++)
    {
        printf("Information for roll number %d:\n", i+1);
        printf("Name: %s\n",students[i].name);
        printf("Marks: %0.1f\n",students[i].marks);
    }
    return 0;
}