#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two value");
    scanf("%d%d",&a,&b);
    printf("a is = %d and b is = %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("a is = %d and b is = %d",a,b);
}