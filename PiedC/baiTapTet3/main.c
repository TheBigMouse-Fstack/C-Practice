#include <stdio.h>
#include <stdlib.h>
//B3:
//nhét 1 mảng khác vào 1 mảng gốc ở vị trí nào đó
//hàm nhận vào arrMain, arrSub, pos
//-> nhét sub vào main ở vị trí pos
//=> ứng dụng insert| nhét
    //arr: 2 4 6 8
    //i  : 0 1 2 3  size:4

    //sub: 1 3 5 size: 3  pos: 1
//lexicle scoping: return hàm như một con trỏ
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
void insertArray(int arr[], int* size, int arrSub[], int sizeSub, int pos);
int main()
{
    int arrMain[MAX];
    int sizeMain;
    int arrSub[100] = {3, 4 , 1, 5};
    int sizeSub = 4;
    inputArray(arrMain, &sizeMain);
    printf("\nMang ne: ");
    outputArray(arrMain, sizeMain);
    insertArray(arrMain, &sizeMain, arrSub, sizeSub, 3);
    printf("\nMang sau khi nhet ne");
    outputArray(arrMain, sizeMain);
    return 0;
}
void insertArray(int arr[], int* size, int arrSub[], int sizeSub, int pos){
    for(int i = *size - 1; i >= pos; i--){
        arr[i + sizeSub] = arr[i];
    }
    for(int i = 0; i <= sizeSub - 1; i++) {
        arr[pos + i] = arrSub[i];
    }
    *size += sizeSub;
}

void inputArray(int arr[], int* size){
    printf("\nNhap size: ");
    scanf("%d", size);

    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap gia tri vo arr[%d] di: ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
