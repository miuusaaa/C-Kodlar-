#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float max,min,number1,number2,number3;

    printf("Enter first number : ");
    scanf("%f",&number1);
    printf("Enter second number : ");
    scanf("%f",&number2);
    printf("Enter third number : ");
    scanf("%f",&number3);

    printf("\n");

    if(number1>number2&&number1>number3){
        max=number1;
        if(number2>number3){
            min=number3;
        }else{
            min=number2;
        }
    }else if(number2>number1&&number2>number3){
        max=number2;
        if(number1>number3){
            min=number3;
        }else{
            min=number1;
        }
    }else if(number3>number1&&number3>number2){
        max=number3;
        if(number1>number2){
            min=number2;
        }else{
            min=number1;
        }
    }else if(number1==number2&&number1>number3){
        max=number1=number2;
        min=number3;
    }else if(number1==number3&&number1>number2){
        max=number1=number3;
        min=number2;
    }else if(number2==number3&&number3>number1){
        max=number2=number3;
        min=number1;
    }


    if(!(number1==number2&&number1==number3)){
        printf("The min and max of numbers are %.2f and %.2f.\n",min,max);
    }else{
        printf("The numbers are equal , so they have not min or max !\n");
    }
    return 0;
}
