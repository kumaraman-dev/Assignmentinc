#include<stdio.h>
float area(int);
int q1()
{
int r;
float s;
printf("Enter Your Radius");
scanf("%d",&r);
s= area(r);
printf("%f",s);
}
float area(int a)
{
    float c;
    c=3.14*a*a;
    return c;
}