#include <stdio.h>
#include <string.h>
void EX1()
{
    int freq[27] = {0};
    char str [100];
    printf("Enter a string: ");
    gets(str);
    for(int i = 0 ; str[i] != '\0' ;i++)
    {
        freq[str[i] - 'a']++;
    }
    char ch;
    printf("Enter a character to find frequency: ");
    scanf("%c",&ch);
    printf("Frequency of %c = %d",ch,freq[ch-'a']);
}

void EX2()
{
    char str [100];
    printf("Enter a string: ");
    gets(str);
    int len = 0;
    for(len ; str[len] != '\0';len++);
    printf("Length of string: %d",len);
}

void EX3()
{
    char str [100] ,temp;
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str);
    for(int i = 0 ; i < len /2 ;i++)
    {
        temp = str[i];
        str[i] = str[len - 1 -i];
        str[len - 1 -i] = temp;
    }
    printf("Reverse string is : %s",str);
} 
int main()
{   
    EX3();

    return 0;
}