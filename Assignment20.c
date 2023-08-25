#include<stdio.h>
int main()
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