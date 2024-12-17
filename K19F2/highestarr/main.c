#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputarr ( int arr[], int* size);
void outputarr(int arr[], int size);
int lowesttarr(int arr[], int size);
int main()
{
    int arrmain[MAX];
    int sizemain;
    inputarr(arrmain, &sizemain);
    printf("\nMang la: ");
    outputarr(arrmain, sizemain);
    printf("\nmin la %d", lowestarr(arrmain,sizemain));
    return 0;
}
void inputarr ( int arr[], int* size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0; i<= *size - 1; i++){
        printf("\nNhap arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }
}
void outputarr(int arr[], int size){
    for(int i = 0; i<= size - 1; i++){
            printf("%5d", arr[i]);
        }
}
int lowestarr(int arr[], int size){
    int min = arr[0];
    for(int i = 0 ; i <= size - 1; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}
