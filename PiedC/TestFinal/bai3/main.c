#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
int findKey(int arr[], int size, int key);
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int main()
{
    int arr[] = {2, 0, 1, 4, 3, 6, 4, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int res = findKey(arr, size, 2);
    printf("\nRes ne: %d", res);
    printf("\nMang ne: ");
    outputArray(arr, size);
    return 0;
}
int findKey(int arr[], int size, int key){
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == key) return i;
    }
    return -1;
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
