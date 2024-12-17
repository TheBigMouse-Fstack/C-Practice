#include <stdio.h>
#include <stdlib.h>
//viết hàm sắp xếp mảng theo chiều tăng dần về mặt giá trị
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
void sapXepArray(int arr[], int size);
int main()
{
    int arr[] = {10, 12, 3, 4, 5, 1, 20};
    int size = sizeof(arr)  / sizeof(arr[0]);
    sapXepArray(arr, size);
    printf("\nMang ne: ");
    outputArray(arr, size);
    return 0;
}
void sapXepArray(int arr[], int size){
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            if(arr[i] > arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}


void inputArray(int arr[], int* size){
    printf("\nNhap kich thuoc di em: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap value vao arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
