#include <stdio.h>
#include <stdlib.h>
void inputarray (int array[], int*size);
void outputarray(int array[], int size);
void concatarrayV1(int array1[], int size1, int array2[],int size2, int array3[],int*size3);
int main()
{
    int arr1[100] = {1 , 3 , 5, 7};
    int size1 = 4;
    int arr2[100] = {2,4,6};
    int size2 = 3;
    int arr3[100] = {5,5,5,5,5};
    int size3 = 5;

    printf("\nMang1 la: ");
    outputarray(arr1,size1);
    printf("\nMang2 la: ");
    outputarray(arr2,size2);
    concatarrayV1(arr1, size1, arr2, size2, arr3, &size3);
    printf("\nMang sau khi noi la: ");
    outputarray(arr3,size3);
    return 0;
}
void inputarray (int array[], int*size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0 ; i <= *size -1 ; i++){
        printf("\nNhap array[%d]: ",i);
        scanf("%d",&array[i]);
    }
}
void outputarray(int array[], int size){
    for(int i = 0 ; i <= size - 1; i++){
        printf("%4d",array[i]);
    }
}
void concatarrayV1(int array1[], int size1, int array2[],int size2, int array3[],int*size3){
    *size3 = 0;
    for(int i = 0 ; i<= size1-1;i++){
        array3[*size3] = array1[i];
        (*size3)++;
    }
    for(int i = 0 ; i <= size2 - 1; i++){
        array3[*size3] = array2[i];
        (*size3)++;
    }
}
