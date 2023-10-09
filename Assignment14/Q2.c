#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n");
    scanf("%d",&n);
    for ( i = 1; i <20; i++)
    {
        n=n/10;
        if (n==0)
        {
           break;
        }
        
    }
    printf("No of digit is %d",i);
}