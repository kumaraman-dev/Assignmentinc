#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("Enter two value");
    scanf("%d%d",&a,&b);
    printf("a is = %d and b is = %d\n",a,b);
    swap(&a,&b);
    printf("a is = %d and b is = %d",a,b);
}
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}