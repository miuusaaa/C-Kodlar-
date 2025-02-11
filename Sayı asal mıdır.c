#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int i,number,flag=0;

    printf("Enter a positive integer : ");
    scanf("%d",&number);
    printf("\n");

    if(number==0||number==1){
        printf("%d is not prime .\n",number);
        return 1;
    }else if(number<0){
        printf("%d is not a positive number .\n",number);
        return 2;
    }else{
        for(i=0;i<=number-1;i++){
            if(i==0||i==1||i==number){
                continue;
            }
            if(number%i==0){
                flag=1;
                break;
            }
          }
    }

     if(flag==1){
        printf("%d is not prime .\n",number);
      }else{
        printf("%d is prime .\n",number);
      }

    return 0;
}











