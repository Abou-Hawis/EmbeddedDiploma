#include <stdio.h>

int main()
{
    char str[50];
    printf("Pointer : Print a string in reverse order : \n");
    printf("Input a string : ");
    scanf("%s",str);
    char * ptr = str;
    int len = 0;
    while(*ptr != '\0')
    {
        len++;
        ptr++;
    }
    ptr = str;
    char * end = (ptr  + len - 1);
    for(int i = 0; i < len /2 ; i++ ,ptr++, end--)
    { 
        char temp = *end;
        *end = *ptr;
        *ptr = temp;
    }
    printf("Reverse of the string is : %s" , str);
    return 0;
}