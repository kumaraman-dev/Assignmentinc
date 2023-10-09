#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    for (int i = 1; i <=3; i++)
    {
        x=x/10;
    }
    if (x==0)
    {
        printf("This is three digit number");
    }
    else
    {
        printf("The number is not three digit number");
    }
    
}