#include<stdio.h>
int main()
{
    int r;
    float a;
    const float pi=3.14;
    printf("Enter the radius :");
    scanf("%d",&r);
    a=pi*r*r;
    printf("Area is %f",a);

}