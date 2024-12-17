#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int insteadArray(int arr[], int size, int pos, int key);
int insertArray(int arr[], int *size, int pos, int key);
int main()
{
    int arr[100] = {2, 4, 6, 8, 10};
    int size = 5;
    int pos, key;
    printf("\nNhap pos: ");
    scanf("%d", &pos);
    printf("\nNhap key: ");
    scanf("%d", &key);
    //xài hàm
    int result = insertArray(arr, &size, pos, key);
    if(result){
        printf("\nMang ne: ");
        outputArray(arr, size);
    }else{
        printf("\nPos khong hop le");
    }
    return 0;
}
int insertArray(int arr[], int *size, int pos, int key){
    if(pos < 0 || pos > *size) return 0;
    for(int i = *size - 1; i >= pos; i--){
        arr[i + 1] = arr[i];
    }
    (*size)++;
    arr[pos] = key;
    return 1;
}

int insteadArray(int arr[], int size, int pos, int key){
    if(pos < 0 || pos > size - 1){
        return 0;
    }else{
        arr[pos] = key;
        return 1;
    }
}




void inputArray(int arr[], int* size){
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap value arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
/*
    insteadArray: thay thế phần tử ở vị trí thứ pos bằng key
    mô tả: f(arr[], pos, key)
    vào trong arr đến vị trí pos thay bằng key
    arr: 2 4 6 8 10
    i =  0 1 2 3 4
    pos = 2
    key = 15

    insertArray: nhét 1 phần tử vào vị trí pos của mảng
    mô tả: f(arr[], int pos, int key)
    nhiệm vụ của hàm là nhét key vào vị trí pos trong mảng
    arr: 2 4 6 8 10
    i  : 0 1 2 3 4      pos: 2  key: 15
*/

