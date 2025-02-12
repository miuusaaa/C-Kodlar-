#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int number,i,j;

    printf("Enter a positive number to see which numbers are prime till that : ");
    scanf("%d",&number);
    printf("\n");

    if(number<2){
        printf("There is no prime number till number you entered !\n");
        return 0;
    }

    for(i=2;i<=number;i++){
        for(j=2;j<=i/2;j++){
            if(i%j==0){
               break;
            }
        }
        if(i==2||i%j!=0){
            printf("%d\n",i);
        }
    }

    return 0;

}
