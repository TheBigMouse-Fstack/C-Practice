#include <stdio.h>
#include <stdlib.h>

const int MAX =100;
float avginarray ( int arr[] , int size);
void inputarray(int arr[] , int*size);
void outputarray(int arr[], int size );

int main()
{
    int arrmain[MAX];
    int size;

    inputarray(arrmain , &size);
    outputarray(arrmain, size);

    avginarray( arrmain, size);
     printf("\ntb cong la: %f", avginarray(arrmain, size));
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
float avginarray ( int arr[] , int size){
    int sum = 0;
    float result = 0;
    for(int i = 0 ; i <= size - 1; i++){
        sum += arr[i];
    }
    result = (float) sum / (float) size;
    return result;
}

