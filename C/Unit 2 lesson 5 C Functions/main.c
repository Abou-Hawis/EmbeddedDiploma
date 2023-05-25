#include <stdio.h>

void EX1(void) // near to O(n)
{
   unsigned int u32Primes[1000] = {0};
   u32Primes[0] = u32Primes[1] = 1 ;                        /* That mean 1 and 2 is not primes */
   /*preprocessing to find Primes first with sieve O(n loglog n)*/
   for(int i = 2 ; i < 1000 ; i++)
   {
        if(u32Primes[i])continue; // mean if it is not a prime continue
        /*this for loop will mark multiples of a prime as not a prime number */
        for(int j = i * 2 ; j < 1000 ; j += i)
        {
            u32Primes[j] = i; 
        }
   }
   int Interavlstart,IntervalEnd;                           /*The start of interval and the end of the interval defination*/
   printf("Enter two numbers(intervals): ");                /*this statement will print 'Enter two numbers(intervals):' with standerd output */
   scanf("%d%d",&Interavlstart,&IntervalEnd);               /*this statement will receive the values of variables*/
   printf("Prime numbers between %d and %d are: ",Interavlstart,IntervalEnd);
   for(int i = Interavlstart ; i <= IntervalEnd ;i++) 
   {
        if(!u32Primes[i])                                   /*This mean the number is prime*/
        {
            printf("%d ",i);
        } 
   }
}

int nFactorial(int num);

void EX2(void)
{
    printf("Enter an positive integer: ");                    /*it will print this statement 'Enter an positive integer: ' with standard output*/
    int number;                                               /*variable number defination which we will recieve from user */
    scanf("%d",&number);                                      /*allow to user to enter data with standard input*/
    printf("nFactorial of %d = %d",number,nFactorial(number));  /*this statment will print the result , we will pass data with value*/

}

void vReverce(int idx , char * ch);

void EX3(void)
{
    printf("Enter a sentence: "); 
    char str[60];                                             /*char array to store the string*/
    gets(str);                                                /*to get the string from user*/
    vReverce(0,str);                                          /*to find the reverce of the function*/
}

int nPow(int base , int exp);

void EX4(void)
{
    int base,exp;
    printf("Enter base number: ");
    scanf("%d",&base);
    printf("Enter power number(positive integer): ");
    scanf("%d",&exp);
    printf("%d^%d = %d",base,exp,nPow(base,exp));
}

int main(void)
{

    EX4();
    return 0;
}

void vReverce(int idx , char * ch)
{
    if(ch[idx] == '\0') return;                               /*if we found the end of string we must return*/
    vReverce(idx+1,ch);                                       /*it will recersive until idx equal to the end of string*/
    printf("%c",ch[idx]);                                     /*print reverced sentence*/
}

int nFactorial(int num)
{
    if(num == 0) return 1;                                    /*if num equal to zero that mean the recursive is end*/
    return num * nFactorial(num-1);                            /*it will recersive until num equal to zero*/
}

int nPow(int base , int exp)
{
    if(exp == 0 )return 1;                                    /*if exp equal to zero that mean it equal to one for example 3^0 = 1
                                                               and this is the end of recursion*/
    return base * nPow(base,exp-1);
}