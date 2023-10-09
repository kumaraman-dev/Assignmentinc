#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two value");
    scanf("%d%d",&a,&b);
    printf("a is = %d and b is =%d\n",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    
    printf("a is = %d and b is =%d",a,b);
}