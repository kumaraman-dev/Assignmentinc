/*#include<stdio.h>
int factorial(int);
int main()
{
    int n,s;
printf("Enter the number");
scanf("%d",&n);
s= factorial(n);
printf("%d",s);
}
int factorial(int n)
{
    int p,i;
    for (i = 1,p=1; i <=n; i++)
    {
       p=p*i;
      
    }
     return p;
}*/
#include<stdio.h>
float combination(int,int);
int main()
{
    int n,r,s;
printf("Enter N");
scanf("%d",&n);
printf("Enter r");
scanf("%d",&r);
s= combination(n,r);
printf("No Of Combination Is %d",s);
}
float combination(int n, int r)
{
    int z,p,q,t,i,j,k;
if (r>n)
{
    printf("Wrong input");
}
else
for ( i = 1,p=1; i <=n; i++)
{
   p=p*i;

}
for (j = 1,q=1; j <=r; j++)
{
    q=q*j;
}
for ( k = 1,t=1; k <=(n-r); k++)
{
   t=t*k;
}
z=p/(q*t);
return z;



}