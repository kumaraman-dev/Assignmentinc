#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("Enter the number");
    scanf("%d",&n);
    for (i = 2; i <=n-1; i++)
    {
        if (n%i==0)
        {
            flag=1;
        }
        
    }
    if (flag==1)
    {
        printf("Number is not prime");
    }
    else
    {
        printf("Number is prime");
    }
}