#include<stdio.h>
int main()
{
    float sp,cp,p,l,pp,lp;
    printf("Enter the cost price");
    scanf("%f",&cp);
    printf("Enter the selling price");
    scanf("%f",&sp);
    if (sp>cp)
    {
        p=sp-cp;
        printf("Your profit is %f\n",p);
        pp=p/cp*100;
        printf("Your profit percentage is %f ",pp);

    }
    if (sp<cp)
    {
       l=cp-sp;
       printf("Your Loss is %f\n",l);
       lp=l/cp*100;
       printf("Your loss percentage is %f",lp);
    }
    
    
}