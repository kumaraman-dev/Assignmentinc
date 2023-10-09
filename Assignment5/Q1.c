#include<stdio.h>
int main()
{
    int x,rem,sum=0;
    printf("Enter three digit integer");
    scanf("%d",&x);
    while (x!=0)
    {
        rem=x%10;
        sum=sum+rem;
        x=x/10;
    }
    printf("Sum of three digit Number is %d",sum);
}