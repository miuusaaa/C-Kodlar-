#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int d[10],i,j;

    for(i=0;i<10;i++){
        printf("%d.sayiyi girin : ",i+1);
        scanf("%d",&d[i]);

        if(i>0){

        for(j=i-1;j>=0;j--){
            if(d[i]==d[j]){
                i--;
          }
        }
      }
    }

    printf("\n");

    for(i=0;i<10;i++){
        printf("%d.sayi : " , i+1);
        printf("%d\n",d[i]);
    }

    return 0;

}
