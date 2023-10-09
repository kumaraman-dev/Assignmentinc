#include<stdio.h>
int main()
{
    int x;
    printf("Enter your number");
    scanf("%d",&x);
    if (x>0)
    {
        printf("Number is positive");

    }
    if (x<0)
    {
        printf("Number is negative");
    }
    if (x==0)
    {
        printf("Number is Zero");
    }
    
    
}