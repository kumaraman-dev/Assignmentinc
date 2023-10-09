#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the marks in mathematics");
    scanf("%d",&a);
    printf("Enter marks in physics");
    scanf("%d",&b);
    printf("Enter Your Marks in Chemistry");
    scanf("%d",&c);
    printf("Enter Your Marks in Biology");
    scanf("%d",&d);
    printf("Enter Your Marks in English ");
    scanf("%d",&e);
    if (a>33 && b>33 &c>33 &d>33 &e>33)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }

}