#include <stdio.h>
#include <stdlib.h>
//compareArray
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int compareArray(int arr1[], int size1, int arr2[], int size2);

int main()
{
    int arr1[100] = {2, 4, 6, 8, 10};
    int size1 = 5;
    int arr2[100] = {2, 4, 6, 8, 10, 9};
    int size2 = 6;
    int res = compareArray(arr1, size1, arr2, size2);
    printf("\nResult = %d", res);
    //dung if de in ra chi tiet hon nhe!
    return 0;
}
int compareArray(int arr1[], int size1, int arr2[], int size2){
    //tim kich thuoc be nhat trong size1 va size2 de tranh viec so sanh voi rac
    int size = size1 < size2 ? size1 : size2;
    //duyet mang de so sanh cac cap gia tri
    for(int i = 0; i <= size - 1; i++){
        if(arr1[i] > arr2[i]) return 1;
        else if(arr1[i] < arr2[i]) return -1;
    }
    //neu xuong duoc day nghia la cac cap deu bang nhau
    //ta phai so qua kich thuoc
    if(size1 > size2) return 1;
    else if(size1 < size2) return -1;
    else return 0;
}


void inputArray(int arr[], int* size){
    printf("\nNhap size: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap value vo arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
