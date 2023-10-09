#include<stdio.h>
int main()
{
    int p=1,n;
    printf("Enter the value of n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
      p=p*i;
    }
    printf("%d",p);
}