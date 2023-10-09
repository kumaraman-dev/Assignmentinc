#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,n,i=1;
    printf("Enter the number");
    scanf("%d",&n);
    while (i<=n)
    {
        i++;
        a=b;
        b=c;
        c=a+b;
    }
    if (n==c)
    {
        printf("%d is a member of fibonacci series",n);
    }
    else
    {
        printf("%d is not a member of fibonacci series",n);
    }
}