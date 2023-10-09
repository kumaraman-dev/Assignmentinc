#include<stdio.h>
int main()
{
    int a;
    printf("Enter the month number");
    scanf("%d",&a);
    if (a==1||a==3||a==5||a==7||a==8||a==10||a==12)
    {
       printf("The number of Days in the months is 31 day");
    }
    else if (a==2)
    {
        printf("The month has 28 days");
    }
    else
    {
        printf("The month has 30 days");
    }
}