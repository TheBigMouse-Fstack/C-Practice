#include <stdio.h>

void inputArray(int arr[], int*size);
void outputArray(int arr[], int size);
void concatenateArrays(int arr1[], int size1, int arr2[], int size2, int result[]);

int main() {
    int arr1[100];
    int arr2[100];
    int size1, size2;

    inputArray(arr1, &size1);
    printf("\nMang 1: ");
    outputArray(arr1, size1);

    inputArray(arr2, &size2);
    printf("\nMang 2: ");
    outputArray(arr2, size2);

    int sizeResult = size1 + size2;
    int result[sizeResult];
    concatenateArrays(arr1, size1, arr2, size2, result);
    printf("\nMang sau khi noi: ");
    outputArray(result, sizeResult);
    return 0;
}

void inputArray(int arr[], int*size) {
    printf("\nNhap kich thuoc mang : ");
    scanf("%d", size);
    for (int i = 0; i < *size; i++) {
        printf("\nNhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
void concatenateArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    for (int i = 0; i < size1; i++) {
        result[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        result[size1 + i] = arr2[i];
    }
}
