#include<stdio.h>
int main()
{
    int a;
    char ch;
    printf("Enter your character");
    scanf("%c",&ch);
    a=sizeof(ch);
    printf("%d",a);
}