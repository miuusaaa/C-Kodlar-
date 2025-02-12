#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int i,j,number=0;

    printf("Enter a number as line of right triangle : ");
    scanf("%d",&number);
    printf("\n");

    for(i=1;i<=number;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }

    printf("\n");

    for(i=1;i<=number;i++){
        for(j=1;j<=number-i+1;j++){
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;

}
