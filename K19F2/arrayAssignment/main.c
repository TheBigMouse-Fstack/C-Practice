#include <stdio.h>
#include <stdlib.h>
//copyarray:sao chep mang
//concatarray:noi mang
//reversearray:dao nguoc mang
//dan tuong ung | nhet | swap doi xung
void inputarr(int array[],int*size);
void outputarr(int array[],int size);
void cpyArray(int arrayS[], int*sizeS , int arrayM[],int sizeM);

int main()
{
    int arr1[100] ={3,7,2,1,8};
    int size1 = 5;
    int arr2[100]={1,2,3};
    int size2 = 3;
    printf("\nArr1: ");
    outputarr(arr1 , size1);
    printf("\nArr2: ");
    outputarr(arr2,size2);

    cpyArray(arr1,&size1,arr2,size2);

    printf("\nArr1': ");
    outputarr(arr1, size1);
    printf("\nArr2': ");
    outputarr(arr2,size2);
    return 0;
}
void cpyArray(int arrayS[], int*sizeS , int arrayM[],int sizeM){
    for(int i = 0; i <= sizeM - 1 ;i-=-1){
        arrayS[i] = arrayM[i];
        *sizeS = sizeM;
    }
}

void inputarr(int array[],int*size){
    printf("\nnhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0 ; i<= *size - 1;i++){
        printf("\nNhap array[i]: ",i);
        scanf("%d",&array[i]);
    }
}
void outputarr(int array[],int size){
    for(int i = 0 ; i<= size - 1;i++){
        printf("%4d",array[i]);
    }
}
