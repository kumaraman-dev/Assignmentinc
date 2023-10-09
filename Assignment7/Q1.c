#include<stdio.h>
int main()
{
    int x;
    printf("Enter the integer");
    scanf("%d",&x);
    if (x>0)
    {
        printf("Positive number");
    }
    else if (x<=0)
    {
        printf("Non Positive Number");
    }
    
}