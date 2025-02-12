#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int number1,number2,i,ebob,ekok=0,multiple;

    printf("Enter 1th number : ");
    scanf("%d",&number1);

    printf("Enter 2nd number : ");
    scanf("%d",&number2);

    printf("\n");

     printf("Numbers divided common by : ");

     if(number1==0&&number2==0){
        printf("All numbers excluding 0.\n");
        printf("The numbers ebob is infinity.\n");
        return 6;
     }else if(number1==0||number2==0){
        if(number1==0){
            ebob=number2;
            printf("%d\n",number2);
        }else if(number2==0){
            ebob=number1;
            printf("%d\n",number1);
        }
     }else{
        for(i=1;!(i>number1||i>number2);i++){
          if(number1%i==0&&number2%i==0){
              ebob=i;
              printf("%d ",i);
          }
        }
      }

    printf("\nNumbers ebob is %d\n",ebob);

    if(number1==0||number2==0){
        ekok=0;
    }else{
       for(multiple=fmax(number1,number2);!(ekok==multiple);multiple++){
        if(multiple%number1==0 && multiple%number2==0){
            ekok=multiple;
            break;

         }
       }
    }

    printf("%d's multiple of %d and %d's multiple of %d are ekok.\n",number1,ekok/number1,number2,ekok/number2);
    printf("Numbers ekok is %d\n",ekok);

    return 0;

}
