#include<stdio.h>
int q1()
{
    int a;
    printf("\n1.January");
    printf("\n2.Febuary");
    printf("\n3.March");
    printf("\n4.April");
    printf("\n5.May");
    printf("\n6.June");
    printf ("\n7.July");
    printf("\n8.August");
    printf("\n9.September");
    printf("\n10.October");
    printf("\n11.November");
    printf("\n12.December");
    printf("\nEnter Your Month No");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
    printf("Days In Your Month 31");
        break;
        case 2:
        printf("\n Days In Your Month 28");
        break;
        case 3:
        printf("\nDays In Your Month 31");
        break;
        case 4:
        printf("\nDays In Your Month 30");
        break;
        case 5:
        printf("\nDays In Your Month 31");
        break;
        case 6:
        printf("\nDays In Your Month 30");
        break;
        case 7:
        printf("\nDays In Your Month 31");
        break;
        case 8:
        printf("\nDays In Your Month 31");
        break;
        case 9:
        printf("\nDays In Your Month 30");
        break;
        case 10:
        printf("\nDays In Your Month 31");
        break;
        case 11:
        printf("\nDays In Your Month 30");
        break;
        case 12:
        printf("\nDays In Your Month 31");
        break;
    
    default:
    printf("\ndefault");
        break;
    }
}
int q2()
{
    int a;
    printf("\n1.Addition");
    printf("\n2.Substraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Exit");
    printf("\nChoose from your menue");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
    printf("You Have Selected Addition");
        break;
        case 2:
        printf("You Have Selected Substraction");
        break;
        case 3:
        printf("You Have Selected Multiplication");
        break;
        case 4:
        printf("You Have Selected Division");
        break;
        case 5:
        printf("Exit");
        break;
    
    default:
    printf("Default");
        break;
    }
}
int q3()
{
    int a;
    printf("\n1.Monday");
    printf("\n2.Tuesday");
    printf("\n3.Wednasday");
    printf("\n4.Thrusday");
    printf("\n5.Friday");
    printf("\n6.Saturday");
    printf("\n7.Sunday");
    printf("\nEnter Your Day Number");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
printf("\nWelcome to Monday Nou go to work");
        break;
        case 2:
        printf("\nHappy Tuesday");
        break;
        case 3:
        printf("\nHappy Wednasday");
        break;
        case 4:
        printf("\nHappy Thrusday");
        break;
        case 5:
        printf("\nHappy friday ");
        break;
        case 6:
        printf("\nHappy Sleeping Saturday");
        break;
        case 7:
        printf("\nHappy Sunday");
        break;
    
    default:
    printf("\nDefault");
        break;
    }
}