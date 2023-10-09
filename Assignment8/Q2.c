#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of x");
    scanf("%d",&x);
    printf("Enter the value of y");
    scanf("%d",&y);
    if (x>y)
    {
        printf("The greater number is %d",x);
    }
    else if (y>x)
    {
        printf("The greater number is %d",y);
    }
    else
    {
        printf("Both the number are equal to %d",x);
    }
    
}