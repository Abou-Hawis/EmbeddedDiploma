#include <stdio.h>
#include <stdlib.h>

union job{
    char name [32];
    float salary;
    int worker_no;
}u;
struct job1 {
    char name [32];
     float salary;
    int worker_no;
}s;
int main()
{
    printf("size of union = %d",sizeof(u)); 
    printf("\nsize of structure = %d", sizeof(s));
    return 0;
}


/*
    The output of the program is :
    32 and 40
*/