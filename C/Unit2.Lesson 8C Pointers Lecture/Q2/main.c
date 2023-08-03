#include <stdio.h>

int main()
{
    char ch ;
    char *ptr = &ch;
    printf("The Alphabets are : \n");
    for( *ptr = 'A' ; *ptr <= 'Z' ; ++*ptr)
    {
        printf(" %c" , *ptr);
    }

    return 0;
}