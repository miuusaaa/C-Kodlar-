#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int i=0,j,number,number2;

    printf("Enter a number : ");
    scanf("%d",&number);

    printf("Enter number2 : ");
    scanf("%d",&number2);

    printf("\n");

    while(i<=number){
            j=0;
        while(j<=number2){
            printf("%d*%d=%d\n",i,j,i*j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;

}
