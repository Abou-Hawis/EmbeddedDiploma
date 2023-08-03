#include <stdio.h>

int main()
{
    int m  = 29; 
    printf("Address of m : 0x%p\n",&m);
    printf("Value of m : %d",m);
    printf("\n\n");
    int *ab = &m;
    printf("Now ab is assigned with the address of m.\n");
    printf("Address of pointer ab : 0x%p\n",ab);
    printf("Content of pointer ab : %d\n\n" , *ab);
    m = 34;
    printf("The value of m assigned to 34 now.\n");
    printf("Address of pointer ab : 0x%p\n",ab);
    printf("Content of pointer ab : %d\n\n" , *ab);
    *ab = 7;
    printf("Address of m : 0x%p\n",&m);
    printf("Value of m : %d",m);

    return 0;
}