#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    char character;
    float number1,number2;

    printf("Enter first number : ");
    scanf("%f",&number1);
    printf("Enter second number : ");
    scanf("%f",&number2);

    printf("\n");

    printf("What do you want to do with them ? ");
    printf("For sum press \"+\",for sub \"-\",for multiplication \"*\",and for division \"/\" : ");
    scanf(" %c",&character);

    printf("\n");

    switch(character){

           case '+': printf("%f+%f=%f\n",number1,number2,number1+number2);
                     break;
           case '-': printf("%f-%f=%f\n",number1,number2,number1-number2);
                     break;
           case '*': printf("%f*%f=%f\n",number1,number2,number1*number2);
                     break;
           case '/': printf("%f/%f=%f\n",number1,number2,number1/number2);
                     break;
           default:printf("Please enter one of them (+,-,*,/)\n");
                   return 1;

    }


    return 0;

}
