#include<stdio.h>
int main()
{
    int a,b,c,d;
    float e;
    double f;
    printf("Enter an inteager :");
    scanf("%d",&a);
    printf("Enter a float :");
    scanf("%f",&e);
    printf("Enter an double");
    scanf("%lf",&f);
    b=sizeof(a);
    c=sizeof(e);
    d=sizeof(f);
    printf("Size of inteager is %d\n",b);
    printf("Size of float is %d\n",c);
    printf("size of double is %d",d);
}