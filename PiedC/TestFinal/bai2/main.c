#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
void inputArrToArr(int arr[], int* size, int sub[], int sizeS, int pos);
int main()
{
    int arr[] = {1, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sub[] = {3, 7, 9};
    int sizeS = sizeof(sub) / sizeof(arr[0]);
    printf("\nMang ne: ");
    inputArrToArr(arr, &size, sub, sizeS, 0);
    outputArray(arr, size);
    return 0;
}
void inputArrToArr(int arr[], int* size, int sub[], int sizeS, int pos){
    if(pos < 0 || pos >= *size) return;
    int j = 0;
    for(int i = *size - 1; i >= pos; i--){
        arr[i + sizeS] = arr[i];
    }
    *size += sizeS;
    for(int i = 0; i <= sizeS - 1; i++){
        arr[i + pos] = sub[i];
    }
}
void inputArray(int arr[], int* size){
    printf("\nNhap size di: ");
    scanf("%d", size);

    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap gia tri vao arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
