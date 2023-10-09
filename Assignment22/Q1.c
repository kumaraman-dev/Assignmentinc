#include<stdio.h>
int factorial(int);
int main()
{
    int n,b;
    printf("Enter the number");
    scanf("%d",&n);
    b=factorial(n);
    printf("The factorial is %d",b);
}
int factorial(int n)
{
    int p=1;
    for (int i = 1; i <=n; i++)
    {
        p=p*i;
    }
    return p;
}