#include <stdio.h>
void EX1()
{
    float matrix1[2][2];
    printf("Enter the elements of 1st matrix\n");
    for(int r = 0 ; r < 2 ; r++)
    {
        for(int c = 0 ; c < 2 ; c++ )
        {
            printf("Enter a%d%d: ",r+1,c+1);
            scanf("%f",&matrix1[r][c]);
        }
    }
    float matrix2[2][2];
    printf("Enter the elements of 2nd matrix\n");\
    for(int r = 0 ; r < 2 ; r++)
    {
        for(int c = 0 ; c < 2 ; c++ )
        {
            printf("Enter b%d%d: ",r+1,c+1);
            scanf("%f",&matrix2[r][c]);
        }
    }
    printf("Sum Of Matrix:\n");
    for(int r = 0 ; r < 2 ; r++)
    {
        for(int c = 0 ; c < 2 ; c++ )
        {
            printf("%0.1f ",matrix1[r][c] + matrix2[r][c]);
        }
        printf("\n");
    }
}

void EX2()
{
    int N;
    printf("Enter the numbers of data: ");
    scanf("%d",&N);
    float arr[100] , sum =0.0;
    while(N > 100 || N <=0)
    {
        printf("Number of elements must be in range 1 : 100 ");
        printf("Enter the numbers of data: ");
        scanf("%d",&N);
    }
    for(int i = 0 ;  i < N ; i++)
    {
        printf("%d. Enter number: ",i+1);
        scanf("%f",&arr[i]);
        sum += arr[i];
    }
    printf("Average : %0.2f",sum/N);
}

void EX3()
{
    int R,C;
    printf("Enter rows and column of matrix: "); 
    scanf("%d%d",&R,&C);
    int matrix[100][100] , transposed[100][100];
    while ((R > 100 || R <= 0 ) || (C > 100 || C <=0))
    {
        printf("Number of rows and coloms must be in range 1:100");
        printf("Enter rows and column of matrix: "); 
        scanf("%d%d",&R,&C);
    }
    printf("Enter elements of matrix:\n");
    for(int r = 0 ; r < R ; r++)
    {
        for(int c = 0 ; c < C ; c++ )
        {
            printf("Enter a%d%d: ",r+1,c+1);
            scanf("%d",&matrix[r][c]);
        }
    }
    printf("Entered Matrix:\n");
    for(int r = 0 ; r < R ; r++)
    {
        for(int c = 0 ; c < C ; c++ )
        {
            printf("%d ",matrix[r][c]);
            transposed[c][r] = matrix[r][c];
        }
        printf("\n");
    }
    printf("Transpose of Matrix:\n");
    for(int r = 0 ; r < C ; r++)
    {
        for(int c = 0 ; c < R ; c++ )
        {
            printf("%d ",transposed[r][c]);
        }
        printf("\n");
    }
}
void EX4()
{
    int n ,arr[100];
    printf("Enter no of elements : ");
    scanf("%d",&n);
    while(n > 100 || n <=0)
    {
        printf("Number of elements must be on range 1 : 100\n");
        printf("Enter no of elements : ");
        scanf("%d",&n);
    }
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    if(n == 100)
    {
        printf("You cant insert more elements\n");
        return;
    }
    int num,loc;
    printf("Enter the element to be inserted : ");
    scanf("%d",&num);
    printf("Enter the location : ");
    scanf("%d",&loc);
    while(loc > 100 && loc <=0)
    {
        printf("location must be on range 1 : %d\n",n);
        printf("Enter the location : ");
        scanf("%d",&loc);
    }
    for(int i = n-1 ; i >= 0 ; i--)
    {
        arr[i+1] = arr[i];
        if(loc-1 == i)
        {
            arr[loc-1] = num;
            break;
        }
    }
    n++;
    for(int i = 0; i < n;i++)
    {
        printf("%d ",arr[i]);
    }
}

void EX5()
{
    int n ,arr[100];
    printf("Enter no of elements : ");
    scanf("%d",&n);
    while(n > 100 || n <=0)
    {
        printf("Number of elements must be on range 1 : 100\n");
        printf("Enter no of elements : ");
        scanf("%d",&n);
    }
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int num;
    printf("Enter the elements to be searched : ");
    scanf("%d",&num);
    int i = 0 ;
    for(i ; i < n ; i++)
    {
        if(num == arr[i])
        {
            printf("Number found at the location = %d",i+1);
            break;
        }
    }
    if(i == n)
    {
        printf("Not Found -_-");
    }
}
int main()
{
    EX5();
    return 0;
}