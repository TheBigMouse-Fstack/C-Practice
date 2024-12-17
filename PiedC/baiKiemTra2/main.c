#include <stdio.h>
#include <stdlib.h>
//viết hàm xóa một phần tử ở vị trí thứ pos trong mảng
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
void deleteElement(int arr[], int* size, int pos);
int main()
{
    int arr[MAX]
    return 0;
}
void deleteElement(int arr[], int* size, int pos){
    for(int i = pos; i <= *size - 1; i++){
        arr[i - 1] = arr[i];
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
