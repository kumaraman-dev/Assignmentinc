#include<stdio.h>
int nfact(int);
int rfact(int);
int nrfact(int);
int main()
{
    int n,r,a,b,c,d;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("Enter the va;ue of r");
    scanf("%d",&r);
    a=nfact(n);
    b=rfact(r);
    c=nrfact(n-r);
    d=a/(b*c);
    printf("The no of combination n item out of r is %d",d);
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
int rfact(int r)
{
    int p=1;
    for (int i = 1; i<=r; i++)
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