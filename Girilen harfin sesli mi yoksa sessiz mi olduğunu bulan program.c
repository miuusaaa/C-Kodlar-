#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    char character;
    printf("Enter a letter : ");
    scanf(" %c",&character);
    printf("\n");

    if((character>='a'&&character<='z')||(character>='A'&&character<='Z')){

    switch(character){
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U': printf("%c is vowel.\n",character); break;
       default: printf("%c is consonant.\n",character);
    }

   }else{
      printf("Please enter a letter !\n");
   }

    return 0;

}
