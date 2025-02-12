#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float angle1,angle2,angle3,sum;

    printf("Enter first angle : ");
    scanf("%f",&angle1);
    printf("Enter second angle : ");
    scanf("%f",&angle2);
    printf("Enter third angle : ");
    scanf("%f",&angle3);

    printf("\n");

    sum=angle1+angle2+angle3;

    if(sum!=180){
        printf("The tringle's sum of angles must be 180!\n");
    }else{
        if(angle1==60&&angle2==60&&angle3==60){
            printf("The triangle is equilateral.\n");
        }else if(angle1==angle2||angle1==angle3||angle2==angle3){
            printf("The triangle is isosceles.\n");
        }else{
            printf("The triangle is scalene.\n");
        }
    }

    return 0;

}

