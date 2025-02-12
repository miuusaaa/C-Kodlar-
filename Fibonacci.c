#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int first=1,second=1,third,i=0,number;

    printf("Enter a number : ");
    scanf("%d",&number);
    printf("\n");

    for(i=1;i<=number;i++){
        if(i<3){
            printf("%d.number :%d\n",i,first=second);
        }else{
        third=first+second;
        printf("%d.number :%d\n",i,third);
        first=second;
        second=third;
      }
    }


    printf("\n%d.number is : %d\n",i-1,third);
    return 0;

}
