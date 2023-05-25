/*
 * main.c
 *
 *  Created on: Apr 30, 2023
 *      Author: mahmo
 */


#include <stdio.h>

void EX1()
{
	printf("C Programming");
}

void EX2()
{
	int Number;
	printf("Enter a integer: ");
	scanf("%d",&Number);
	printf("You entered: %d",Number);
}

void EX3()
{
	int num,num2;
	printf("Enter two integers: ");
	scanf("%d %d",&num,&num2);
	printf("Sum: %d",num+num2);
}

void EX4()
{
	float num1,num2;
	printf("Enter two numbers: ");
	scanf("%f %f",&num1,&num2);
	float res = num1 * num2;
	printf("Product: %f",res);
}

void EX5()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c" , &ch);
	printf("ASCII value of %c = %d",ch,ch);

}

void EX6()
{
	float a,b;
	printf("Enter value of a: ");
	scanf("%f",&a);
	printf("Enter value of b: ");
	scanf("%f",&b);
	float temp = a;
	a = b;
	b = temp;
	printf("After swapping, value of a = %0.2f\n",a);
	printf("After swapping, value of b = %0.2f",b);
}

void EX7()
{
	float a,b;
	printf("Enter value of a: ");
	scanf("%f",&a);
	printf("Enter value of b: ");
	scanf("%f",&b);
	a *= b;
	b = (a/b);
	a = (a/b);
	printf("After swapping, value of a = %0.2f\n",a);
	printf("After swapping, value of b = %0.2f",b);
}

int main()
{
    EX7();
	return 0;
}
