#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int findMaxInArray(int arr[], int size);
int findMinInArray(int arr[], int size);
int main()
{
    int arrMain[MAX];
    int sizeMain;
    inputArray(arrMain, &sizeMain);
    printf("\nMang ne: ");
    outputArray(arrMain, sizeMain);
    printf("\nSo lon nhat: %d", findMaxInArray(arrMain, sizeMain));
    printf("\nSo be nhat: %d", findMinInArray(arrMain, sizeMain));
    return 0;
}
int findMinInArray(int arr[], int size){
    int min = arr[0];
    for(int i = 0; i <= size - 1; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}
int findMaxInArray(int arr[], int size){
    int max = arr[0];//gia dinh thang dau tien trong mmang la lon nhat
    for(int i = 0; i <= size - 1; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
void inputArray(int arr[], int* size){
    printf("\nNhap size di em: ");
    scanf("%d", size);

    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap value do arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
//1. tim tich cua hai so bat ki trong mang lon nhat
//--optional
//2. tim tong lon nhat cua day so lien tiep trong mang
//1 3 -5 2 7 6 -2 4 -3 1
