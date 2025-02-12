#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    char character;
    printf("Enter a character : ");
    scanf("%c",&character);

    printf("\n");

    if(isdigit(character)){
        printf("%c is a number.\n",character);
    }else if(isalpha(character)){
        printf("It is a letter.\n",character);
    }else if(ispunct(character)){
        printf("It is a punctuation symbol.\n",character);
    }else{
        printf("It is an special symbol.\n",character);
    }


    return 0;

}
