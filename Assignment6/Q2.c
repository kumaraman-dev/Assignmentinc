#include<stdio.h>
int main()
{
    int n,x,y=0;
    printf("Enter the number");
    scanf("%d",&n);
    while (n!=0)
    {
       x=n%10;
       y=y*10+x;
       n=n/10;
    }
    printf("Reverse is %d",y);
}