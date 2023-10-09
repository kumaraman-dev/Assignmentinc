#include<stdio.h>
int max(int a[5]);
int main()
{
    int l;
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number for index number %d",i);
        scanf("%d",&a[i]);
        l=max(a);
        printf("%d",l);
    }
    int max(int a[5])
    {
        int l;
        l= a[0];
        for (int i = 0; i < 5; i++)
        {
            if (a[i]>l)
            {
                l=a[i];
            }
            
        }
        return max;
    }
}