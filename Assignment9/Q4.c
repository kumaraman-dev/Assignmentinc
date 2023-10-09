#include<stdio.h>
int main()
{
    int a;
    printf("Enter The Number");
    scanf("%d",&a);
    if (a%2==0&&a%3==0)
    {
        printf("The number is divisible by both 2 and 3");
    }
    else if (a%2==0 && a%3!=0)
    {
        printf("Numner is divisible by 2 but not by 3");
    }
    else if (a%2!=0 && a%3==0)
    {
        printf("Number is divisible by 3 but not by 2");
    }
    else
    {
        printf("Not divisible by either 2 and 3");
    }
    
}