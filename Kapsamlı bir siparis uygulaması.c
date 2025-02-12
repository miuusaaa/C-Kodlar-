#include <stdio.h>
#include <stdlib.h>

int main(){

    int Asayisi,Bsayisi,Csayisi,Dsayisi,Esayisi,Afiyati,Bfiyati,Cfiyati,Dfiyati,Efiyati,ToplamFiyat,ToplamIndirim,IndirimsizFiyat;
    Afiyati=5; Bfiyati=6; Cfiyati=7; Dfiyati=10; Efiyati=3; int flag=1; int i=0;

  while(flag!=0){

    printf("------%d.siparis------\n\n",i+1);

    printf("Aldiginiz A urunu sayisini giriniz : ");
    scanf("%d",&Asayisi);
    printf("Aldiginiz B urunu sayisini giriniz : ");
    scanf("%d",&Bsayisi);
    printf("Aldiginiz C urunu sayisini giriniz : ");
    scanf("%d",&Csayisi);
    printf("Aldiginiz D urunu sayisini giriniz : ");
    scanf("%d",&Dsayisi);
    printf("Aldiginiz E urunu sayisini giriniz : ");
    scanf("%d",&Esayisi);

    printf("\n\n");

    if(5<Asayisi&&Asayisi<10){
        ToplamIndirim+=10;
    }else if(10<Asayisi&&Asayisi<30){
      ToplamIndirim+=25;
    }else if(30<Asayisi){
      ToplamIndirim+=50;
    }


    if(1<=Bsayisi&&Bsayisi<5){
        ToplamIndirim+=4;
    }else if(60<Bsayisi&&Bsayisi<85){
      ToplamIndirim+=45;
    }


    if(Csayisi>=2&&Csayisi%2==0){
        ToplamIndirim+=(Csayisi*Cfiyati)/2;
    }else if(Csayisi>2&&Csayisi%2!=0){
        ToplamIndirim+=((Csayisi-1)*Cfiyati)/2;
    }else{
        ToplamIndirim+=0;
    }

    IndirimsizFiyat=Asayisi*Afiyati+Bsayisi*Bfiyati+Csayisi*Cfiyati+Dsayisi*Dfiyati+Esayisi*Efiyati;
    ToplamFiyat=Asayisi*Afiyati+Bsayisi*Bfiyati+Csayisi*Cfiyati+Dsayisi*Dfiyati+Esayisi*Efiyati-ToplamIndirim;

    printf("Indirimsiz fiyat : %d\n",IndirimsizFiyat);
    printf("Kazandiginiz toplam indirim : %d Turk Lirasi\n",ToplamIndirim);
    printf("Odemeniz gereken toplam siparis tutari : %d Turk Lirasi\n\n\n",ToplamFiyat);

    i++;

    printf("Baska satin almak istediginiz bir sey varsa herhangi bir rakami , yoksa 0 i tuslayin: ");
    scanf("%d",&flag);
    if(flag==0){printf("------IYI GUNLER , YINE BEKLERIZ :D------");}
    printf("\n");

     }

    return 0;
}

















