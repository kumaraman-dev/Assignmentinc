#include<stdio.h>
int main()
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