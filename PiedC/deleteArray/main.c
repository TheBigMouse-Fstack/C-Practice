#include <stdio.h>
#include <stdlib.h>
/*
deleteArray(array[], pos);
c1: ham xoa duoc thi return 1
    khong xoa duoc thi return 0 (pos khong hop le)
c2: ham neu xoa duoc thi return phan tu da xoa (de hoan tac)
    neu khong xoa duoc thi return null|undefined|[] (khong the dung cach 2 trong ngon ngu C)
*/
/*
checkAnna: kiem tra xem mot mang co doi xung khong?
arr: 4 2 2 4 return 1
arr: 4 2 3 2 3 4 return 0
*/
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int deleteArray(int arr[], int* size, int pos);
int checkAnna(int arr[], int size);
int main()
{
    int arr[100] = {2, 3, 1, 5, 1, 3, 2};
    int size = 7;
    printf("\nResult: %d", checkAnna(arr, size));
    return 0;
}
int checkAnna(int arr[], int size){
    for(int i = 0; i <= size/2 - 1; i++){
        if(arr[i] != arr[size - i - 1]) return 0;
    }
    return 1;
}
int deleteArray(int arr[], int* size, int pos){
    if(pos < 0 || pos > *size - 1) return 0;
    for(int i = pos; i <= *size - 1/* -2 cung duoc */; i++){
        arr[i] = arr[i + 1];
    }
    (*size)--;
    return 1;
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
