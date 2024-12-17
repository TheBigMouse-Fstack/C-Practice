#include <stdio.h>
#include <stdlib.h>
/*
    *Bài 1: ArrayInArray:
        tìm mảng trong mảng
        hàm này nhận vào arr[], key[]
        tìm mảng key có tồn tại trong mảng arr hay không
        nếu có return index
        nếu không return -1
    arr  : 2 3 2 1 3 2 5 2 2
    index: 0 1 2 3 4 5 6 7 8
    key  : 2 5
    return 5
*/
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int arrayInArray(int arr[], int size, int arrKey[], int sizeKey);
int arrayInArray2(int arr[], int size, int arrKey[], int sizeKey);
int main()
{
    int arr[100] = {2, 3, 2, 1, 3, 2, 5, 2, 2};
    int size = 9;
    int arrKey[100] = {2, 5};
    int sizeKey = 2;
    printf("\nMang ban dau: ");
    outputArray(arr, size);
    printf("\nKet qua: %d", arrayInArray(arr, size, arrKey, sizeKey));
    return 0;
}

/*  arr  : 2 3 2 1 3 2 5 2 2
    index: 0 1 2 3 4 5 6 7 8
    key  : 2 5
    return 5
*/
int arrayInArray2(int arr[], int size, int arrKey[], int sizeKey){//cách anh Điệp chỉ
    int j = 0;
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == arrKey[i]){
            j++;
            if(j == sizeKey){
                return i;
            }
        }else{
            i -= j;
            j = 0;
        }
    }
}
//quát phắc :DD? nó vẫn ra 2 như cách của e :)
int arrayInArray(int arr[], int size, int arrKey[], int sizeKey){
    for(int i = 0; i <= size - 1; i++){
        for(int j = 0; j <= sizeKey - 1; j++){
            if(arr[i + j] != arrKey[j]){
                break;
            }
            if(sizeKey == j+1){
                return i;
            }
        }

    }
    return -1;
}

void inputArray(int arr[], int* size){
    printf("\nNhap kich thuoc di: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap gia tri vao arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
