#include <stdio.h>

void bubblesort(int arr[],int length){

     for(int i=0;i<length-1;i++){
        for(int j=0;j<length-i-1;j++){
            if(arr[j+1]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
     }

}

int main(){

    int arr[6]={-3,5,4,2,1,7},i;

    bubblesort(arr,6);

    printf("The array ordered by bubblesort is : ");

    for(i=0;i<6;i++){
        printf("%i ",arr[i]);
    }

    return 0;
}
