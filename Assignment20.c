#include<stdio.h>
int q1()
{
    int a;
    printf("\n1.If Your Mark Is Between 90 to 100 ");
    printf("\n2.If Your Marks is 80 to 90");
    printf("\n3.If Your Mark Is 70 to 80");
    printf("\n4.If Your Mark Is 60 to 70");
    printf("\n5.If Your Mark Is 50 to 60");
    printf("\n6.If Your Marks Is Less Than 50");
    printf("\nEnter Your Choice");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
    printf("GRADE A");
        break;
    case 2:
    printf("GRADE B");
    break;
    case 3:
    printf("GRADE C");
    break;
    case 4:
    printf("GRADE D");
    break;
    case 5:
    printf("GRADE E");
    break;
    case 6:
    printf("GRADE F");
    break;
    default:
    printf("Invalid Marks");
        break;
    }
}
int q2()
{
    int a;
    int n,p,i,b,e,s;
    float c,d;
    printf("\n1.Factorial Of Number");
    printf("\n2.Check Even And Odd");
    printf("\n3.Area of circle");
    printf("\n4.Sum of first n natural number");
    printf("\n5.Exit");
    printf("\nEnter Your Choice");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
    
    printf("Enter The number");
    scanf("%d",&n);
    for ( i = 1,p=1; i <=n; i++)
    {
        p=p*i;

    }
    printf("%d",p);
        break;
    case 2:
    printf("Enter Your Number :");
    scanf("%d",&b);
    if (b%2==0)
    {
        printf("Even Number");
    }
    else{
        printf("Odd Number");
    }
    case 3:
    printf("Enter Your radius of circle");
    scanf("%f",&c);
    d=3.14*c*c;
    printf("%f",d);
    break;
    case 4:
printf("Enter The number You Want To find Sum");
scanf("%d",&e);
for ( i = 1,s=0; i <=e; i++)
{
   s=s+i;
   
}
printf("%d",s);
break;
case 5:
printf("Exit");
break;
    default:
    printf("default");
        break;
    }
}