#include <stdio.h>

typedef struct
{
    float real;
    float imaginary;

} stComplexNumber;

int main()
{
    stComplexNumber x ,y;
    printf("for 1st complex number\n\n");
    printf("Enter real and imaginary respectively: ");
    scanf("%f%f",&x.real,&x.imaginary);
    printf("\nfor 2st complex number\n");
    printf("Enter real and imaginary respectively: ");
    scanf("%f%f",&y.real,&y.imaginary);
    printf("\nSum = %0.1f+%0.1fi",x.real+y.real,x.imaginary+y.imaginary);
    return 0;
}