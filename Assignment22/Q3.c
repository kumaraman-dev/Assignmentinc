#include<stdio.h>
int nfact(int);
int nrfact(int);
int main()
{
    int n,r,a,b,c;
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("Enter the value of r :");
    scanf("%d",&r);
    a=nfact(n);
    b=nrfact(n-r);
    c=a/b;
    printf("The arrangment of n values taken r at a time is %d",c);
}
int nfact(int n)
{
    int p=1;
    for (int i = 1; i<=n; i++)
    {
        p=p*i;
    }
    return p;
}
int nrfact(int a)
{
    int p=1;
    for (int i = 1; i<=a; i++)
    {
        p=p*i;
    }
    return p;
}