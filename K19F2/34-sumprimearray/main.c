#include <stdio.h>
#include <stdlib.h>
const int MAX =100;
int sumprimearr ( int arr[] , int size);
void inputarray(int arr[] , int*size);
void outputarray(int arr[], int size );

int main()
{
    int arrmain[MAX];
    int size;

    inputarray(arrmain , &size);
    printf("\nmang la: ");
    outputarray(arrmain, size);

     printf("\ntong la: %d", sumprimearr(arrmain, size));
    return 0;
}
void inputarray(int arr[] , int*size){
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);

    for(int i = 0 ; i <= *size - 1; i++){
        printf("\nnhap array[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void outputarray(int arr[], int size ){
    for(int i ; i<= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
int sumprimearr( int arr[] , int size){
    int sum = 0;
    for(int i = 0 ; i <= size - 1; i++){
        if(arr[i] > 1){
            int isprime = 1;
            for(int n = 2 ; n <= arr[i] - 1; n++){
                if(arr[i] % n == 0){
                    isprime = 0;
                }
            }
            if(isprime == 1){
                sum += arr[i];
            }
        }
    }
    return sum;
}

