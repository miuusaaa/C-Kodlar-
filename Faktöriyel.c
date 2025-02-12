#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int number,i;
    int factoriel=1;

    printf("Enter a natural number to find its factoriel : ");

    if((scanf("%d",&number))!=1||number<0){
        printf("\nYou entered negative integer or invalid input.\n");
        return 1;
    }

    for(i=2;i<=number;i++){
        factoriel*=i;
    }

    printf("\nThe %d number's factoriel is %d.\n",number,factoriel);

    return 0;

}
