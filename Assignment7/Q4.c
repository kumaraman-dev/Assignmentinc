#include<stdio.h>
int main()
{
    int x,quiotent;
    printf("Enter the number");
    scanf("%d",&x);
    quiotent=x/2;
    if (quiotent*2==x)
    {
        printf("It is an Even Number");
    }
    else
    {
        printf("It is an Odd Number");
    }
}