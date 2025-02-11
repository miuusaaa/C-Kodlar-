#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int number,i;
    printf("Enter a number to see multiplication table : ");
    scanf("%d",&number);

    printf("\n");

    i=0;

    while(i<=10){
        printf("%d*%d=%d\n",number,i,number*i);
        i++;
    }

    return 0;

}
