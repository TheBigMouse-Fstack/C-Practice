#include <stdio.h>
#include <stdlib.h>
void inputarray(int array[], int*size);
void outputarray(int array[], int size);
int comparearray(int array1[], int size1, int array2[], int size2);
int main()
{
    int array1[100];
    int size1;
    int array2[100];
    int size2;
    inputarray(array1,&size1);
    inputarray(array2,&size2);
    printf("\nMang1 la: ");
    outputarray(array1,size1);
    printf("\nMang2 la: ");
    outputarray(array2,size2);
    printf("\n%d",comparearray(array1,size1,array2,size2));
    return 0;

}
void inputarray(int array[], int*size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0 ; i<= *size -1;i++){
        printf("\nNhap array[%d]: ",i);
        scanf("%d",&array[i]);
    }
}
void outputarray(int array[], int size){
    for(int i = 0 ; i<= size - 1;i++){
        printf("%4d",array[i]);
    }
}
int comparearray(int array1[], int size1, int array2[], int size2){
    int minsize = size1 < size2 ? size1 : size2;
    for(int i = 0 ; i <= minsize -1 ; i++){
        if(array1[i]== array2[i]){

        }
        if(array1[i] > array2[i]) return 1;
        if(array1[i] < array2[i]) return -1;
    }
    if(size1 == size2){
        return 0;
    }else if(size1 > size2){
        return 1;
    }else if(size1 < size2){
        return -1;
    }
    else{

    }
}
