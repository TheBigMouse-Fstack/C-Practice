#include <stdio.h>
#include <stdlib.h>

//Viết Hàm Nhập Vào Mảng, In ra phần từ nhỏ nhất trong mảng ( 6p )
void inputarr(int arr[], int*size);
void outputarr(int arr[], int size);
int smallest (int arr[], int size);
int main()
{
    int arrmain[100];
    int sizemain = 0;
    inputarr(arrmain, &sizemain);
    printf("\nmang vua nhap la:");
    outputarr( arrmain, sizemain);

    printf("\nMin la:%d", smallest (arrmain , sizemain));
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
int smallest (int arr[], int size){
    int min = arr[0];
    for(int i = 0; i <= size - 1 ; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}
