#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int i,j,row,number;

    printf("Enter row number : ");
    scanf("%d",&row);

    for(i=1;i<=row;i++){
        for(j=1;j<=row-i+1;j++){
            printf("   ");
        }
        for(j=1;j<=i;j++){
            if(j==1||j==i){
                number=1;
            }else{
                number=number*(i-j+1)/(j-1);
            }
            printf(" %4d ",number);
        }
        printf("\n");
    }



    return 0;

}
