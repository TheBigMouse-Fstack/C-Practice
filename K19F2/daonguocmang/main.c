#include <stdio.h>
#include <stdlib.h>

const int MAX =100;
void inputarray(int arr[] , int*size);
void outputarray(int arr[], int size );
void reverseArray(int arr[],int start,int end);

int main()
{
    int arrmain[MAX];
    int sizemain;

    inputarray(arrmain , &sizemain);
    printf("\nMang luc dau: ");
    outputarray(arrmain, sizemain);
    reverseArray(arrmain,0,sizemain-1);
    printf("\nMang luc sau: ");
    outputarray(arrmain, sizemain);
    return 0;
}
void inputarray(int arr[] ,int*size){
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);

    for(int i = 0 ; i <= *size - 1; i++){
        printf("\nnhap array[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void outputarray(int arr[],int size ){
    for(int i ; i<= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
void reverseArray(int arr[],int start,int end){
    while (start < end){
        int tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
        start++;
        end--;
    }
}


