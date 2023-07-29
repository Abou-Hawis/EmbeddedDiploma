#include <stdio.h>

typedef struct
{
    int   foot;
    float inch;
} stDistance;

void sumOfTwoDist(stDistance * x , stDistance * y ,stDistance * s)
{
    s->foot = x->foot + y->foot;
    s->inch = x->inch + y->inch;
    if(s->inch > 12)
    {
        s->inch -= 12;
        s->foot += 1;
    }
}

int main()
{
    stDistance x,y,sum;
    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    scanf("%d",&x.foot);
    printf("Enter inch: ");
    scanf("%f",&x.inch);
    printf("Enter information for 2st distance\n");
    printf("Enter feet: ");
    scanf("%d",&y.foot);
    printf("Enter inch: ");
    scanf("%f",&y.inch);
    sumOfTwoDist(&x , &y ,&sum);
    printf("Sum of distances =%d\'-%0.1f\"",sum.foot,sum.inch);
    return 0;
}