#include <stdio.h>

int main()
{
    int n;
    int array[15];
    int *ptr = array;
    printf("Input the number of elements to store in the array (max 15) : ");
    scanf("%d" , &n);
    printf("Input %d number of elements in the array :\n\n" ,n);
    for(int i = 0 ; i < n ; i++)
    {
        printf("element - %d :" , i+1);
        scanf("%d",ptr);
        ptr++;
    }
    ptr--;
    printf("\n\n");
    printf("The elements of array in reverse order are :\n\n");
    for(int i = n ; i > 0 ;i--)
    {
        printf("element - %d : %d\n" ,i ,*ptr);
        ptr--;
    }
    return 0;
}