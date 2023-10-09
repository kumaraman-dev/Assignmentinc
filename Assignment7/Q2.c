#include<stdio.h>
int main()
{
    int x;
    printf("Enter an integer");
    scanf("%d",&x);
    if (x%5==0)
    {
        printf("The number is divisible by 5");
    }
    else
    {
        printf("The number is not divisible by 5");
    }
}