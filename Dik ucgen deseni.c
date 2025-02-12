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
            printf("#");
        }
        printf("\n");
    }


    return 0;

}
