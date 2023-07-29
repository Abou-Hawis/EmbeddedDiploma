#include <stdio.h>
#define CIRCLE_AREA(r) (r * r *pi)
const float pi = 3.1415;

int main()
{
    int radius;
    float area;
    printf("Enter the radius: ");
    scanf("%d",&radius);
    area = CIRCLE_AREA(radius);
    printf("Area=%0.2f",area);
    return 0;
}