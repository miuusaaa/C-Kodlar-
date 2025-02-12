#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    char *day=NULL;
    int daynumber;
    int sum=0;

    printf("Enter a day number (1-7) : ");
    scanf("%d",&daynumber);

    printf("\n");

    switch(daynumber){

           case 7:sum+=25; if(daynumber==7){day="Sunday";}
           case 6:sum+=19; if(daynumber==6){day="Saturday";}
           case 5:sum+=15; if(daynumber==5){day="Friday";}
           case 4:sum+=10; if(daynumber==4){day="Thursday";}
           case 3:sum+=7;  if(daynumber==3){day="Wednesday";}
           case 2:sum+=5;  if(daynumber==2){day="Tuesday";}
           case 1:sum+=2;  if(daynumber==1){day="Monday";}
                             break;
           default: printf("Enter a day number 1-7!!!\n");

    }

       if(day!=NULL){         //if(day!=NULL) DE KULLANILABİLİR [char *day=NULL yapmak kaydıyla]
       printf("You sell %d products till end of %s day.\n",sum,day);
        }

    return 0;

}
