#include<stdio.h>
int digit(int,int);
int main()
{
   int n,c,b;
   printf("Enter the number");
   scanf("%d",&n);
   printf("Enter the digit");
   scanf("%d",&c);
   b=digit(n,c);
   if (b==0)
   {
    printf("Number dosent contain the digit");
   }
   else
   {
    printf("Number contain the digit");
   }
}
int digit(int n,int c)
{
while (n)
{
    if (n%10==c)
    {
        return 1;
    }
    n=n/10;
}
return 0;
}