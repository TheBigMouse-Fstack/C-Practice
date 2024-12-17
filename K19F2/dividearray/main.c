#include <stdio.h>
#include <stdlib.h>
void outputarray(int array[], int*size);
void dividearrayv1(int array[], int*size , int postion, int arr[], int*sizes );
void dividearrayv2(int array[], int size , int postion, int arr1[], int*size1, int arr2[], int*size2 );

int main()
{
   int arrmain[100]={2,4,6,8,10};
   int sizemain = 5;
   int pos = 2;
   int arrsub1[100]={8,4,6,4};
   int*sizesub1 = 4;
   int arrsub2[100]={8,4,6,4};
   int*sizesub2 = 4;

    printf("\nta co mang luc dau: ");
    outputarray(arrmain,&sizemain);

    //dividearray(arrmain,&sizemain,pos,arrsub,&sizesub);
/*
    printf("\nMang1: ");
    outputarray(arrmain,&sizemain);
    printf("\nMang2: ");
    outputarray(arrsub,&sizesub);
*/
    dividearrayv2(arrmain,sizemain,pos,arrsub1,&sizesub1,arrsub2,&sizesub2);
    printf("\nMang1: ");
    outputarray(arrsub1,&sizesub1);
    printf("\nMang2: ");
    outputarray(arrsub2,&sizesub2);
    return 0;
}

void outputarray(int array[], int*size){
    for(int i = 0 ; i<= *size - 1; i++){
        printf("%4d",array[i]);
    }
}
void dividearrayv1(int array[], int*size , int postion, int arr[], int*sizes ){
    *sizes = 0;
    for(int i = postion ; i<= *size - 1;i++){
        arr[*sizes] = array[i];
        (*sizes)++;
    }
    *size = postion;
}
void dividearrayv2(int array[], int size , int postion, int arr1[], int*size1, int arr2[], int*size2) {
    *size1 = 0;
    *size2 = 0;
    for(int i = postion ; i<= size - 1;i++){
        arr2[*size2] = array[i];
        (*size2)++;
    }
    for(int i = 0 ; i<= postion-1 ;i++){
        arr1[*size1] = array[i];
        (*size1)++;
    }
}
