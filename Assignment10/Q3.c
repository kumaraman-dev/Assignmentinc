#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the The three sides of traingle");
    scanf("%d%d%d",&a,&b,&c);
    if (a+b>c && b+c>a && c+a>b)
    {
        printf("It is a valid Traingle");
    }
    
}