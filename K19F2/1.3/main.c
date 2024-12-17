#include <stdio.h>
#include <stdlib.h>
//Viết Hàm Nhập Vào Mảng, In ra các phần tử trong mảng đó nếu là số nguyên tố ! ( 6p )
void inputarr(int arr[], int*size);
void outputarr(int arr[], int size);
int isprime ( int n);
int main()
{
    int arrmain[100];
    int sizemain = 0;
    inputarr( arrmain,  & sizemain);
    printf("\nmang la so nguyen to la:");
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
        printf("%5d",isprime(arr[i]));
    }
}
int isprime ( int n){
    if(n>1){
        int isprime = 1;
        for(int i = 2 ; i<= n - 1 ; i++){
            if(n % i == 0){
                isprime =0 ;
                return ;
            }
        }
        if(isprime == 1);
        return n;

    }
    return 0;
}
