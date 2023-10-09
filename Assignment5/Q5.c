#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the inteager");
    scanf("%d",&x);
    printf("Enter the inteager you want to add the last");
    scanf("%d",&y);
    x=x*10+y;
    printf("New integer is %d",x);
}