#include <stdio.h>

int main(){

    int x1,x2,x3,y1,y2,y3,i;

    printf("Enter rectangles left down corner like (x1y1): ");
    scanf("%d %d",&x1,&y1);

    printf("Enter rectangles rigth up corner like (x2y2): ");
    scanf("%d %d",&x2,&y2);

    for(i=0;i<10;i++){

    printf("Enter a point as (x3,y3) to control if it is in or not : ");
    scanf("%d %d",&x3,&y3);

    if(!(x1<=x3)){
        printf("IT IS NOT IN THAT\n\n");
        continue;
    }

    if(!(x3<=x2)){
        printf("IT IS NOT IN THAT\n\n");
        continue;
    }

    if(!(y1<=y3)){
        printf("IT IS NOT IN THAT\n\n");
        continue;
    }

    if(!(y3<=y2)){
        printf("IT IS NOT IN THAT\n\n");
        continue;
    }

    printf("IT IS IN\n\n");

    }

   return 0;

}
