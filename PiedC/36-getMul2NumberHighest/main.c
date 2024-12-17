#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
//getMul2NumHighest: tìm tích lớn nhất của 2 số bất kì trong mảng
int getMul2NumHighest(int arr[], int size);
int main()
{
    int arrMain[MAX];
    int sizeMain;
    inputArray(arrMain, &sizeMain);
    printf("\nMang ne: ");
    outputArray(arrMain, sizeMain);
    printf("\nTich lon nhat ne: %d", getMul2NumHighest(arrMain, sizeMain));
    return 0;
}
int getMul2NumHighest(int arr[], int size){
    //giả định
    int max = arr[0] * arr[1];
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++)
            if((arr[i] * arr[j]) > max){
                max = arr[i] * arr[j];
            }
    }
    return max;
}




void inputArray(int arr[], int* size){
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap value cua arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
