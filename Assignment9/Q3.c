#include<stdio.h>
int main()
{
    char ch;
    int a;
    printf("Enter Your Character");
    scanf("%c",&ch);
    
    if (ch>=65 && ch<=90)
    {
        printf("UpperCase Charcter");
    }
    else if (ch>=97 && ch<=122)
    {
       printf("Lowercase Charcter");
    }
    else
    {
        printf("This is not a Alphabate");
    }
}