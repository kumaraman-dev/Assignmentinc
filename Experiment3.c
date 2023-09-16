#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Value of a and b");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        c=a+b;
        printf("Sum is %d",c);
    }
    else
    {
        c=a*b;
        printf("Multiplication is %d",c);
    }
    
return 0;
}