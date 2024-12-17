#include <stdio.h>
#include <stdlib.h>
/*

//B2.2:
//hàm nhận vào 1 mảng
//removeDuplicate: xóa trùng
//   => k còn phần tử nào trùng cả
//   2, 1, 3, 5, 2, 4, 5, 3 => 2 1 3 5 4
//  cách 1:
//  => tìm phần tử trong mảng, copyArray, Nhét
//  arr: 2, 1, 3, 5, 2, 4, 5, 3
//  tmp:
//  duyệt mảng arr xem arr[i]
//      có tồn tại trong tmp k
//      nếu arr[i] k tồn tại trong tmp
//        thì nhét arr[i] vào

//  cách 2:
//  => tìm kiếm, count, delete
//  arr: 2, 1, 3, 5, 2, 4, 5, 3

*/
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int removeDuplicate(int arr[], int* size);
int checkSame(int arr[], int size, int key);
int main()
{
    int arr[100] = {1, 3, 5, 7, 8, 3, 7, 8, 0, 2};
    int size = 10;
    removeDuplicate(arr, &size);
    printf("\nMang ne: ");
    outputArray(arr, size);
    return 0;
}
int checkSame(int arr[], int size, int key){
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == key){
            return 0;
        }
    }
    return 1;
}

int removeDuplicate(int arr[], int* size){
    int tmp[100];
    int sizeTmp = 0;
    int j = 0;
    for(int i = 0; i <= *size - 1; i++){
        int key = arr[i];
        if(checkSame(tmp, sizeTmp, key)){
            tmp[sizeTmp] = arr[i];
            sizeTmp++;
        }
    }
    for(int i = 0; i <= *size - 1; i++){
        arr[i] = tmp[j];
        j++;
    }
    *size = sizeTmp;
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




