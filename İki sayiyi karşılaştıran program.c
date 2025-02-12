#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int mynumber1,mynumber2;
    mynumber1=mynumber2;
    printf("Enter two random numbers :");
    scanf("%d%d",&mynumber1,&mynumber2);

    if(mynumber1>mynumber2){
            printf("%d is greater than %d",mynumber1,mynumber2);
    }else if(mynumber1<mynumber2){
            printf("%d is smaller than %d",mynumber1,mynumber2);
    }else{
        printf("%d is equal %d",mynumber1,mynumber2);
    }

    return 0;
}
