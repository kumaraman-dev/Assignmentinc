#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the Coefficient of x^2");
    scanf("%d",&a);
    printf("Enter the coefficient of x");
    scanf("%d",&b);
    printf("Enter c");
    scanf("%d",&c);
    d=b*b-4*a*c;
    if (d>0)
    {
        printf("Roots are real and unequal");
    }
    else if (d<0)
    {
        printf("Roots are imaginary");
    }
    else{
        printf("Roots are real and equal");
    }
}