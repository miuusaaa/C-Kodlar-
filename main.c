#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

 int number,fourthdigit,thirddigit,seconddigit,firstdigit,sum;

 printf("Enter a four digit number : ");
 scanf("%d",&number);

 fourthdigit=number%10;
 number/=10;
 thirddigit=number%10;
 number/=10;
 seconddigit=number%10;
 number/=10;
 firstdigit=number%10;
 number/=10;

 sum=firstdigit+seconddigit+thirddigit+fourthdigit;

 printf("The sum of digits of number you entered is : %d\n",sum);
 printf("Reverse of number you entered is : %d%d%d%d",fourthdigit,thirddigit,seconddigit,firstdigit);

return 0;
}
