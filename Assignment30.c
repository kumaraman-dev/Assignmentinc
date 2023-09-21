#include<stdio.h>
int q1()
{
    int b;
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the number for index number %d",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (a[i]>a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
            
        }
        
        
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d",a[i]);
    }
    
}
int q11()
{
    int b;
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the number for index number %d",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i]>a[i+1])
        {
            b=a[i];
            a[i]=a[i+1];
            a[i+1]=b;
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    
}
int q12()
{
     int b;
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the number for index number %d",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i]<a[i+1])
        {
            b=a[i];
            a[i]=a[i+1];
            a[i+1]=b;
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    
}
int q2()
{
    int max,smax,i;
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the number for index number %d",i);
        scanf("%d",&a[i]);
    }
    max=a[0];
    for (int i = 0; i < 10; i++)
    {
       if (a[i]>max)
       {
        max=a[i];
       }
       
    }
    smax=-1;
    for (int i = 0; i < 10; i++)
    {
        if (a[i]>smax && smax!=max)
        {
            smax=a[i];
        }
        
    }
    printf(" %d",smax);
    
}
int q3()
{
    int min,smin,i;
    int s[10];
    for ( i = 0; i < 10; i++)
    {
        printf("Enter the number for index number %d",i);
        scanf("%d",&s[i]);
    }
    min=s[0];
    for ( i = 0; i < 10; i++)
    {
        if (s[i]<min)
        {
           min=s[i];
        }
        
    }
    smin=1000;
    for ( i = 0; i <10; i++)
    {
        if (s[i]<smin && s[i]!=min)
        {
            smin=s[i];
        }
        
    }

    printf("This is second lowest %d",smin);
}
int main()
{
    int i,c;
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the number for index number %d",i);
        scanf("%d",&a[i]);
    }
    
    for ( i = 0; i <10; i++)
    {
       for (int j = i+1; i < 10; i++)
       {
        if (a[i]<a[j])
        {
            c=a[i];
            a[i]=a[j];
            a[j]=c;
        }
        
       }
       
       
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    
}