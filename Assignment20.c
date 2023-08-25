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
int q3()
{
    char a;
    printf("Enter Your Charecter");
    scanf("%c",&a);
    switch (a)
    {
    case 'A'...'Z':
    printf("Uppercase");
        break;
    case 'a'...'z':
    printf("Lowercase");
    break;
    default:
    printf("Special Character");
        break;
    }
}
int q4()
{
    char a;
    printf("Enter Your Character");
    scanf("%c",&a);
    switch (a)
    {
    case 'A':
    printf("vowel");
        break;
        case 'B'...'D':
        printf("consonant");
        break;
        case 'E':
        printf("Vowel");
        break;
        case 'F'...'H':
        printf("CONSTANT");
        break;
        case 'I':
        printf("Vowel");
        break;
        case 'J'...'N':
        printf("CONSTANT");
        break;
        case 'O':
        printf("VOWEL");
        break;
        case 'P'...'T':
        printf("CONSTANT");
        break;
        case 'U':
        printf("VOWEL");
        break;
        case 'V'...'Z':
        printf("constant");
        break;
    
    default:
    printf("SPECIAL CHARACTER");
        break;
    }
}
int main()
{
    int c;
    int a,b,L;
    int n,sum=0,m; 
    int e,f,g,h;
    int x,i;
    printf("\n1.Calculate LCM Of Two Number");
    printf("\n2.Calculte the sum of digits of number");
    printf("\n3.Volume Of Cuboid");
    printf("\n4.Check weather the number is prime or not");
    printf("\n5.Exit");
    printf("\nChoose your number");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
 
    printf("\nEnter two number");
    scanf("%d%d",&a,&b);
    for(L=a>b?a:b;L<=a*b;L++)
    {
        if(L%a==0 && L%b==0)
            break;
    }
    printf("LCM is %d",L);
        break;
    case 2:
       
printf("Enter a number:");    
scanf("%d",&n);    
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
printf("Sum is=%d",sum);    
break;
case 3:
printf("Enter Lenghth , breadth and height");
scanf("%d%d%d",&e,&f,&g);
h=e*f*g;
printf("%d",h);
break;
case 4:
printf("Enter your number");
scanf("%d",&x);
for ( i = 2; i <=x-1; i++)
{
    if (x%i==0)
    break;
    
}
if (i==x)
{
    printf("prime");
}
else{
    printf("Not Prime");
}
break;
case 5:
printf("Exit");
break;

    default:
    printf("default");
        break;
    }
}