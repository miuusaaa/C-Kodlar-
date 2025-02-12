#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    char character;

    printf("Enter a character : ");
    scanf(" %c",&character);

    if(character>='a'&&character<='z'){
        printf("It is an lowercase.");
    }else if(character>='A'&&character<='Z'){
        printf("It is an uppercase.");
    }else{
        printf("It is not a letter.");
    }

    return 0;

}
