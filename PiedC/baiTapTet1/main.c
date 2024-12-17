#include <stdio.h>
#include <stdlib.h>
//B2.1:
//  xóa hết phần tử thỏa:
//  hàm nhận vào 1 mảng , key
//  x1g
//  => tìm phần tử trong mảng và delete
//  f([3,1,2,3,5,4,3,6], 3) => [1,2,5,4,6]
//  đánh dấu vòng lập(loop, while)
//   C1: hàm delete
//      duyệt arr tìm arr[i] == 3
//      gọi hàm delete xóa phần từ i1
//   C2: arr : [3,1,2,3,5,4,3,6]
//       tmp :
//      nhét arr vào tmp trừ arr[i] == 3
//      cpy tmp vào arr
int deleteLongArray(int arr[], int* size, int key);
int deleteLongArrayV2(int arr[], int* size, int key);
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int main()
{
    int arr[100] = {1, 3, 4, 3, 5, 6, 2, 3};
    int size = 8;
    int key;
    printf("\nNhap key vo di: ");
    scanf("%d", &key);
    deleteLongArrayV2(arr, &size, key);
    printf("\nMang ne: ");
    outputArray(arr, size);
    return 0;
}
int deleteLongArrayV2(int arr[], int* size, int key){
    int tmp[100];
    int sizeTmp = 0;
    for(int i = 0; i <= *size - 1; i++){
        if(arr[i] != key){
            tmp[sizeTmp] = arr[i];
            sizeTmp++;
        }
    }
    *size = sizeTmp;
    for(int i = 0; i <= *size - 1; i++){
        arr[i] = tmp[i];
    }
}

int deleteLongArray(int arr[], int* size, int key){
    int sizeInFunc = 0;
    for(int i = 0; i <= *size - 1; i++){
        if(arr[i] != key){
            arr[sizeInFunc] = arr[i];
            sizeInFunc++;
        }
    }
    *size = sizeInFunc;
}
void inputArray(int arr[], int* size){
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap value: ");
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}

