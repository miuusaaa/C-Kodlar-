#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int i,j;
    char input,letter='A';

    printf("Enter a uppercase : ");
    scanf("%c",&input);

    for(i=1;i<=input-'A'+1;i++){
        for(j=1;j<=i;j++){
            printf("%c",letter);
        }
        letter++;
        printf("\n");
    }

    return 0;

}
