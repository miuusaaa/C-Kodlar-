#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int i,j,number;

    printf("Enter a number as line of reverse right triangle : ");
    scanf("%d",&number);
    printf("\n");

    for(i=0;i<number;i++){
        for(j=i;j<number;j++){
            printf("#");
        }
        printf("\n");
    }



    return 0;

}
