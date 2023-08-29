#include<stdio.h>
int factorial(int);
int main()
{
    int n,s;
printf("Enter the number");
scanf("%d",&n);
s= factorial(n);
printf("%d",s);
}
int factorial(int n)
{
    int p,i;
    for (i = 1,p=1; i <=n; i++)
    {
       p=p*i;
      
    }
     return p;
}