#include <stdio.h>
#include <stdlib.h>
//Viết Hàm Nhập Vào Mảng, In ra danh sách các phần tử trong mảng ( 4p )

void inputarr(int arr[], int*size);
void outputarr(int arr[], int size);
int main()
{
    int arrmain[100];
    int sizemain = 0;
    inputarr( arrmain, & sizemain);
    printf("\nmang vua nhap la:");
    outputarr( arrmain,  sizemain);
    return 0;
}
void inputarr(int arr[], int*size){
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);

    for(int i = 0 ; i<= *size - 1; i++){
        printf("\nNhap array[%d]: ",i);
        scanf("%d", &arr[i]);
    }
}
void outputarr(int arr[], int size){
     for(int i = 0 ; i<= size - 1; i++){
        printf("%5d",arr[i]);
    }
}
