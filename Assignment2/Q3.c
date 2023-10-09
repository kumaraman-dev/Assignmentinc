#include<stdio.h>
int main()
{
    int p,r,t;
    float si;
    printf("Enter principle,rate,time");
    scanf("%d%d%d",&p,&r,&t);
    si=p*r*t/100;
    printf("SI is %f",si);
}