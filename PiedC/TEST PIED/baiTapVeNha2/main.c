#include <stdio.h>
#include <stdlib.h>
/*
    Bài 2: compareArray: so sánh mảng
    hàm nhận vào arr1[], arr2[]
    so sánh 2 mảng return 1 arr1 > arr2
                         -1 arr1 < arr2
                          0 arr1 == arr2
    arr1 2 1 5 7
    arr2 2 1 3 7 6 9 => arr1 lớn hơn => return 1
*/
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int compareArray(int arr1[], int size1, int arr2[], int size2);
int main()
{
    int arr1[100] = {2, 1, 3, 7};
    int size1 = 4;
    int arr2[100] = {2, 1, 3, 7, 6, 9};
    int size2 = 6;
    int save = compareArray(arr1, size1, arr2, size2);
    if(save == 1){
        printf("\nArr1 > Arr2");
    }else if(save == -1){
        printf("\nArr1 < Arr2");
    }else if(save == 0){
        printf("\nArr1 = Arr2");
    }
    return 0;
}
void inputArray(int arr[], int* size){
    printf("\nNhap kich thuoc di: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap gia tri vao arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
int compareArray(int arr1[], int size1, int arr2[], int size2){
    int mid;
    int i;
    if(size1 > size2){
        mid = size2;
    }else{
        mid = size1;
    }
    for(i = 0; i <= mid - 1; i++){
        if(arr1[i] > arr2[i]){
            return 1;
        }else if(arr1[i] < arr2[i]){
            return -1;
        }
    }
    if(size1 > size2){
        return 1;
    }else if(size1 < size2){
        return -1;
    }
    return 0;
}
