/*
 * main.c
 *
 *  Created on: Apr 30, 2023
 *      Author: mahmo
 */


#include <stdio.h>

void EX1()
{
    int num;
    printf("Enter an integer you want to check: ");
    scanf("%d",&num);
    printf("%d is ",num);
    if(num&1)
    {
        printf("odd\n");
    }
    else
    {
        printf("even\n");
    }
}

void EX2()
{
    char ch;
    printf("Enter an alphapet: ");
    scanf("%c",&ch);
    if(ch == 'a' || ch == 'A' || ch == 'i' || ch =='I' || ch == 'O' ||
       ch == 'u' || ch =='E'  || ch == 'e' || ch =='o' || ch == 'U')
    {
        printf("%c is vowel\n",ch);
    }
    else
    {
        printf("%c is consonent\n",ch);
    }
}

void EX3()
{
    float a,b,c;
    printf("Enter three number: ");
    scanf("%f %f %f",&a,&b,&c);
    float max = (a>b)?a:b;
    printf("Largest number = %0.2f",(c>max)?c:max);
}

void EX4()
{
    float num;
    printf("Enter a number: ");
    scanf("%f",&num);
    if(num < 0)
    {
        printf("%0.2f is negative.",num);
    }
    else if(num > 0)
    {
        printf("%0.2f is positive.",num);
    }
    else
    {
        printf("You entered zero.");
    }
}

void EX5()
{
    char ch;
    printf("Enter an alphapet: ");
    scanf("%c",&ch);
    if((ch >='A' && ch <= 'Z') || (ch >= 'a' && ch <'z'))
    {
        printf("%c is an alphapet",ch);
    }
    else
    {
        printf("%c is not an alphapet",ch);
    }
}

void EX6()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    int sum = (num*(num+1))/2;
    printf("%d",sum);
}

void EX7()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    if(num < 0)
    {
        printf("Error!!! Factorial of negatine number doesn't exist.");
    }
    else if(num == 0)
    {
        printf("Factorial = 1");
    }
    else
    {
        long Factorial = 1;
        for(int i = 2 ; i <=num ;i++)
        {
            Factorial *= i;
        }
        printf("Factorial = %ld",Factorial);
    }
}

void EX8()
{
    float num1,num2;
    char operation;
    printf("Enter operator either + or - or * or divide: ");
    scanf("%c",&operation);
    printf("Enter two operands: ");
    scanf("%f %f",&num1,&num2);
    switch(operation)
    {
        case '+':
        {
            printf("%f %c %f = %0.1f ",num1,operation,num2,num1+num2);
            break;
        }
        case '-':
        {
            printf("%f %c %f = %0.1f ",num1,operation,num2,num1-num2);
            break;
        }
        case '*':
        {
            printf("%f %c %f = %0.1f ",num1,operation,num2,num1*num2);
            break;
        }
        default:
        {
            printf("%f %c %f = %0.1f ",num1,operation,num2,num1/num2);
            break;
        }
    }
}
int main()
{
    EX8();
	return 0;
}
