#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int number,space,manyspace,i,j,line;
    char letter;

    printf("Enter a odd number : ");
    scanf("%d",&number);

    if(!(number%2==1||number%2==-1)){
        printf("You didnt enter an odd number !\n");
        return 3;
    }

    printf("How many space do you want from beginning to end : ");
    scanf("%d",&manyspace);
    if(manyspace<0){
        printf("You entered invalid input !\n");
        return 4;
    }

    printf("Enter a letter : ");
    scanf(" %c",&letter);
    printf("\n");


    for(i=1;i<=number;i++){

        if(i==(number+1)/2){

            for(line=1;line<=i-2+manyspace;line++){
                printf("%c",letter);
            }
        }else if(i<=number/2){
            for(space=0;space<=i+manyspace-2;space++){
                printf(" ");
            }
        }else{
            for(space=0;space<=number+manyspace-i-1;space++){
                printf(" ");
            }
        }

        printf("%c",letter);
        printf("\n");

    }

    return 0;

}
