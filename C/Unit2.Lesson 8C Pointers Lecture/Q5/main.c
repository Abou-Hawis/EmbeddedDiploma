#include <stdio.h>

typedef struct
{
    char name[30];
    int id;

} stEmployee;

int main()
{
    stEmployee emp1 = {
        "Alex" ,
        1002
    };
    stEmployee emp2 = {
        "Hasan" ,
        1003
    };
    stEmployee emp3 = {
        "Gmaml" ,
        1005
    };
    stEmployee (* arr[]) = {&emp2 , &emp1 ,&emp3};
    stEmployee (*(*ptr)[3]) = &arr;
    printf("%s\n",(**(*ptr + 1 )).name);
    printf("%d",(**(*ptr + 1)).id);
    return 0;
}