#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int dizi[10],i,j,suma=0,sumb=0;

    for(i=0;i<10;i++){

        printf("%d. sayiyi girin : " , i+1);
        scanf("%d",&dizi[i]);
    }

    for(i=0;i<10;i++){

        suma+=dizi[i];

      for(j=i+1;j<10;j++){

        sumb+=dizi[j];
    }

        if(suma==sumb){

            printf("\n%d\n",i);
            return 1;

        }else{

            sumb=0;

        }

    }

    return 0;

}
