#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int number,i=0,j=0;

    printf("Enter a number : ");
    scanf("%d",&number);
    printf("\n");

    for(i=1;i<=number;i++){
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }

    printf("\n");

    for(i=1;i<=number;i++){
        for(j=number;j>=i;j--){
            printf("%d ",number-i+1);
        }
        printf("\n");
    }

    printf("\n");

    for(i=1;i<=number;i++){
        for(j=number;j>=i;j--){
            printf("%d ",i);
        }
        printf("\n");
    }

    printf("\n");

    for(i=1;i<=number;i++){
        for(j=number;j>=1;j--){
            if(i==1||i==number){
                printf("* ");
            }else{
                if(j==number||j==1){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
       }
       printf("\n");
    }

    return 0;

}
