#include <stdio.h>
#include <stdlib.h>
/*
        v1(bài tập về nhà): hàm nhận vào mang1, mang2, mang3
        sau khi hàm xử lí: mang1 không đổi
                           mang2 không đổi
                           mang3 sẽ thành mang1 + mang2
                b1: xóa mảng 3
                b2: nhét mảng 1 vào mảng 3
                b3: nhét mảng 2 vào mảng 3
*/
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
void concatArrayV1(int arr3[], int* size3, int arr1[], int size1, int arr2[], int size2);
int main()
{
    int arr1[100] = {2, 4, 3, 1, 6};
    int size1 = 5;
    int arr2[100] = {3, 5, 6};
    int size2 = 3;
    int arr3[100] = {5, 10, 3, 9};
    int size3 = 4;
    printf("\nMang 3 ne: ");
    concatArrayV1(arr3, &size3, arr1, size1, arr2, size2);
    outputArray(arr3, size3);
    return 0;
}
void concatArrayV1(int arr3[], int* size3, int arr1[], int size1, int arr2[], int size2){
    *size3 = 0;
    for(int i = 0; i <= size1 - 1; i++){
        arr3[*size3] = arr1[i];
        (*size3)++;
    }
    for(int i = 0; i <= size2 - 1; i++){
        arr3[*size3] = arr2[i];
        (*size3)++;
    }
}




void inputArray(int arr[], int* size){
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap value vo arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
