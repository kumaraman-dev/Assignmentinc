#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character");
    scanf("%c",&ch);
    if (ch>=65 && ch<=90)
    {
        printf("Character is uppercase");
    }
    else if (ch>=97 && ch<=122)
    {
        printf("Character is lowercase");
    }
    else if (ch>=47 && ch<=57)
    {
        printf("Character is digit");
    }
    else
    {
        printf("Special character");
    }
}