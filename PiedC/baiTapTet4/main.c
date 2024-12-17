#include <stdio.h>
#include <stdlib.h>
//*B4: xóa 1 mảng sub trong mảng arr
//  arrInArray
//  splice
//  f(arr, pos, amount);
//   trong mảng arr xóa từ pos số lượng amount pt
//  //hậu bối của bài delete
//  arr: 2 4 6 8 10   pos 1  amount: 2
//    i  0 1 2 3 4
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int splice(int arr[], int* size, int pos, int amount);
int main()
{
    int arrMain[MAX];
    int sizeMain;
    inputArray(arrMain, &sizeMain);
    printf("\nMang ne: ");
    outputArray(arrMain, sizeMain);
    int res = splice(arrMain, &sizeMain, 0, 3);
    if(res){
        printf("\nMang sau khi doi ne: ");
        outputArray(arrMain, sizeMain);
    }else{
        printf("\nMang bi mat goi hihi!");
    }
    return 0;
}
int splice(int arr[], int* size, int pos, int amount){
    if(pos < 0) return 1;
    for(int i = pos; i <= *size - 1; i++){
        if(i == amount + pos){
            *size = *size - amount;
            if(*size == 0) return 0;
            if(*size != 0) return 1;
        }
        arr[i] = arr[amount + i];
    }
}

void inputArray(int arr[], int* size){
    printf("\nNhap kich thuoc: ");
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
