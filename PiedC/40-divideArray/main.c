#include <stdio.h>
#include <stdlib.h>
//40-divideArray
//22041999
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
void divideArray(int arrMain[], int* sizeMain, int pos, int arrSub[], int* sizeSub);
void divideArrayV2(int arrMain[], int sizeMain, int pos, int arrSub1[], int* sizeSub1, int arrSub2[], int* sizeSub2);
void divideArrayV3(int arrMain[], int sizeMain, int pos, int arrSub1[], int* sizeSub1, int arrSub2[], int* sizeSub2);

int main()
{
    int arrMain[100] = {10, 20, 2, 8, 7, 1};
    int sizeMain = 6;
    int arrSub1[100] = {3, 7, 6, 9};
    int sizeSub1 = 4;
    int arrSub2[100] = {3, 5, 1};
    int sizeSub2 = 3;
    divideArrayV2(arrMain, sizeMain, 3, arrSub1, &sizeSub1, arrSub2, &sizeSub2);
    printf("\nMang Main: ");
    outputArray(arrMain, sizeMain);
    printf("\nMang sub 1 ne: ");
    outputArray(arrSub1, sizeSub1);
    printf("\nMang sub 2 ne: ");
    outputArray(arrSub2, sizeSub2);
    return 0;
}
void divideArrayV3(int arrMain[], int sizeMain, int pos, int arrSub1[], int* sizeSub1, int arrSub2[], int* sizeSub2){
    *sizeSub1 = 0;
    *sizeSub2 = 0;
    for(int i = 0; i <= pos - 1; i++){
        arrSub1[*sizeSub1] = arrMain[i];
        (*sizeSub1)++;
    }
    for(int i = pos; i <= sizeMain - 1; i++){
        arrSub2[*sizeSub2] = arrMain[i];
        (*sizeSub2)++;
    }
}

void divideArrayV2(int arrMain[], int sizeMain, int pos, int arrSub1[], int* sizeSub1, int arrSub2[], int* sizeSub2){
    *sizeSub1 = 0;
    *sizeSub2 = 0;
    for(int i = 0; i <= sizeMain - 1; i++){
        if(i < pos){
            arrSub1[*sizeSub1] = arrMain[i];
            (*sizeSub1)++;
        }else{
            arrSub2[*sizeSub2] = arrMain[i];
            (*sizeSub2)++;
        }
    }
}



void divideArray(int arrMain[], int* sizeMain, int pos, int arrSub[], int* sizeSub){
    *sizeSub = 0;//xoa mang sub, chuan bi luu phan bi cat
    //nhet tu pos den het arrMain vao arrSub
    for(int i = pos; i <= *sizeMain - 1; i++){
        arrSub[*sizeSub] = arrMain[i];
        (*sizeSub)++;
    }
    *sizeMain = pos;
}

void inputArray(int arr[], int* size){
    printf("\nKich thuoc: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap value arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
