#include <stdio.h>

int q1() {
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j<=i){
            printf("* ");}
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
int q5()
{
     int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j<=i){
            printf("%d ",j);}
            else
            printf(" ");
        }
        
        
        printf("\n");
    }

    return 0;
}
