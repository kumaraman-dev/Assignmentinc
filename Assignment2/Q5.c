#include<stdio.h>
int main()
{
    int cp,sp;
    float tp,tl,p,l;
    printf("Enter Cost prize per dozen");
    scanf("%d",&cp);
    printf("Enter Selling prize per dozen");
    scanf("%d",&sp);
    if (sp>cp)
    {
        p=sp-cp;
        tp=(p/12)*25;
        printf("The profit of 25 banana is %f",tp);
    }
    if (cp>sp)
    {
        l=cp-sp;
        tl=(l/12)*25;
        printf("The loss of 25 banana is %f",tl);
    }
    
}