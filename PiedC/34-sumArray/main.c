#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;//Hang so
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
//avgInArray: tinh trung binh cong cua cac phan tu trong mang
float avgInArray(int array[], int size);
//sumEvenElementInArray: tinh tong cac phan tu co gia tri la chan
int sumEvenElementInArray(int array[], int size);
//sumEvenIndexInArray: tinh tong cac phan tu o vi tri chan trong mang
int sumEvenIndexInArray(int array[], int size);
int main()
{
    int arrMain[MAX];//tao ra 100 bien co ten arrMain
    int sizeMain;//luu so luong se xai
    //inputArray
    inputArray(arrMain, &sizeMain);
    //outputArray
    printf("\nMang ne: ");
    outputArray(arrMain, sizeMain);
    printf("\nTrung binh cong ne: %.2f", avgInArray(arrMain, sizeMain));
    printf("\nTong cac so chan trong mang la: %d", sumEvenElementInArray(arrMain, sizeMain));
    printf("\nTong cac phan tu o vi tri chan: %d", sumEvenIndexInArray(arrMain, sizeMain));
    return 0;
}
int sumEvenIndexInArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(i % 2 == 0){
            sum += array[i];
        }
    }
    return sum;
}



int sumEvenElementInArray(int array[], int size){
    int sumEven = 0;
    for(int i = 0; i <= size - 1; i++){
        if(array[i] % 2 == 0){
            sumEven += array[i];
        }
    }
    return sumEven;
}
float avgInArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        sum += array[i];
    }
    return sum / (float)size;
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
void inputArray(int arr[], int* size){
    printf("\nNhap kich thuoc di: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap gia tri vo arr[%d] di: ", i);
        scanf("%d", &arr[i]);
    }
}
