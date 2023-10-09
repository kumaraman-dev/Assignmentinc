#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,n,i=1;
    printf("Enter the value of n");
    scanf("%d",&n);
    while (i<=n)
    {
        i++;
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    
}