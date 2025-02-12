#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){


    int number;
    double squareofnumber;

    printf("Enter a number : ");
    scanf("%d",&number);

    squareofnumber=sqrt(number);

    if(number<0){
        printf("Please , enter a positive number !\n\n  ");
    }
    else if(squareofnumber==(int)squareofnumber){
        printf("%d number's square is %.2lf an integer.\n\n",number,squareofnumber);
    }else{
        printf("%d number's square is %.2lf but it is not an integer.\n\n",number,squareofnumber);
    }


    return 0;

}
