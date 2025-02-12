#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int number,i,j;
    printf("Enter a number :");
    scanf("%d",&number);
    printf("\n");


    for(i=1;i<=number;i++){
        for(j=1;j<=number-i;j++){
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("* ");
        }
        printf("\n");
    }

    for(i=number-1;i>=1;i--){
        for(j=1;j<=number-i;j++){
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;

}
