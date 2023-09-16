#include<stdio.h>
int q1()
{
    int a[10];
    int sum=0;
    for (int i = 0; i <10; i++)
    {
        printf("Enter the value of array of index no %d",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d",sum);
}
int q2()
{
    int sum=0;
    float avg;
    int a[10];
    for (int i = 0; i <10; i++)
    {
        printf("Enter the value of array of index no %d",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/10.0;
    printf("%f",avg);
}
int q3()
{
    int sum=0;
    int a[10];
    for (int i = 0; i <10; i++)
    {
        printf("Enter the value of array of index no %d",i);
        scanf("%d",&a[i]);
        if (a[i]%2==0)
        {
            sum=sum+a[i];
        }
        
    }
    printf("%d",sum);
    
}
int q4()
{
    int a[10];
    int max=0;
    for (int i = 0; i <10; i++)
    {
        printf("Enter the value of array of index no %d",i);
        scanf("%d",&a[i]);
        if (a[i]>max)
        {
            max=a[i];
        }
        
       
        
    }
    printf("%d",max);
}
int main()
{
    int a[10];
    int min;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of array of index no %d",i);
        scanf("%d",&a[i]);
        if (a[i]<min)
        {
            min=a[i];
        }
        
    }
    printf("min is %d",min);
}