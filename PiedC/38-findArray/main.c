#include <stdio.h>
#include <stdlib.h>
//38-findArray

const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int findFirstIndex(int arr[], int size, int key);
void findListIndex(int arr[], int size, int arrR[], int* sizeR, int key);
int main()
{
    int arrMain[MAX];
    int sizeMain;
    int arrayR[100];
    int sizeR;
    inputArray(arrMain, &sizeMain);
    printf("\nMang ne: ");
    outputArray(arrMain, sizeMain);
    int key;
    printf("\nNhap key di: ");
    scanf("%d", &key);
    findListIndex(arrMain, sizeMain, arrayR, &sizeR, key);
    if(sizeR == 0){
        printf("\nKhong co key vua nhap!");
    }else{
        printf("\nArray R ne: ");
        outputArray(arrayR, sizeR);
    }
    /*int key;
    printf("\nNhap key: ");
    scanf("%d", &key);
    int pos = findFirstIndex(arrMain, sizeMain, key);
    if(pos == -1){
        printf("\nKhong tim thay");
    }else{
        printf("\nVi tri tim dc la: %d", pos);
    }*/

    return 0;

}
void findListIndex(int arr[], int size, int arrR[], int* sizeR, int key){
    *sizeR = 0;
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == key){
            arrR[*sizeR] = i;
            (*sizeR)++;
        }
    }
}
int findFirstIndex(int arr[], int size, int key){
    //duyệt mảng: đi qua từng phần tử trong mảng
    for(int i = 0; i <= size - 1; i++){
        if(key == arr[i]){//nếu có thằng nào giống key
            return i;//không tìm nữa, ném vị trí ra ngoài
        }
    }
    return -1;//tìm như chó mà không có
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
/*
find first index: tìm vị trí đầu tiên xuất hiện key trong mảng
hàm nhận vào một mảng array, và key
tìm xem vị trí đầu tiên mà key xuất hiện trong mảng
*/
/*
find list index: tìm danh sách các vị trí mà key xuất hiện
hàm nhận vào array[], key, arrayR[]
tìm các vị trí mà key xuất hiện trong array để lưu vào arrayR
*/
