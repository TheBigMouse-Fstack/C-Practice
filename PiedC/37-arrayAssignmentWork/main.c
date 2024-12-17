#include <stdio.h>
#include <stdlib.h>
//37-arrayAssignmentWork
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
void concatArray(int arr1[],int size1, int arr2[], int size2, int arr3[], int* size3);
void reverseArray(int arr[], int size);
void reverseArrayV2(int arr[], int size);
int main()
{
    int array1[100] = {1, 3, 5, 7};
    int size1 = 4;
    int array2[100] = {2, 4, 6};
    int size2 = 3;
    int array3[100] = {5, 5, 6, 1, 3};
    int size3 = 5;
    //in ra
    printf("\nMang 1 ne: ");
    outputArray(array1, size1);
    printf("\nMang 2 ne: ");
    outputArray(array2, size2);
    printf("\nMang 3 ne: ");
    outputArray(array3, size3);
    //xài hàm concat
    concatArray(array1, size1, array2, size2, array3, &size3);
    printf("\nMang 1 sau ne: ");
    outputArray(array1, size1);
    printf("\nMang 2 sau ne: ");
    outputArray(array2, size2);
    printf("\nMang 3 sau ne: ");
    outputArray(array3, size3);
    reverseArray(array3, size3);
    printf("\nMang 3 sau reverse ne: ");
    outputArray(array3, size3);
    reverseArrayV2(array3, size3);
    printf("\nMang 3 sau reverse ne: ");
    outputArray(array3, size3);
    return 0;
}
void reverseArrayV2(int arr[], int size){
    //duyệt nửa mảng thoi
    for(int i = 0; i <= (size/2) - 1; i++){
        //đổi chỗ thằng ở i với thằng ở size - 1 - i
        int tmp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = tmp;
    }
}
void reverseArray(int arr[], int size){
    int arrayTmp[100];
    int sizeTmp = 0; //vì ban đầu không chứa gì hết
    //nhét array vào arrayTMP nhưng theo chiều ngược lại
    for(int i = size - 1; i >= 0; i--){
        arrayTmp[sizeTmp] = arr[i];
        sizeTmp++;
    }
    //copy arrayTMP lên lại lại array
    for(int i = 0; i <= sizeTmp - 1; i++){
        arr[i] = arrayTmp[i];
    }
    //không cần sao chép kích thước vì nó bằng nhau r
}


void concatArray(int arr1[],int size1, int arr2[], int size2, int arr3[], int* size3){
    *size3 = 0;// xóa mảng 3
    //nhét mảng 1 vào mảng 3
    for(int i = 0; i <= size1 - 1; i++){
        arr3[*size3] = arr1[i];
        (*size3)++;
    }
    //nhét mảng 2 vào mảng 3
    for(int i = 0; i <= size2 - 1; i++){
        arr3[*size3] = arr2[i];
        (*size3)++;
    }
}
void inputArray(int arr[], int* size){
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);

    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap gia tri vao arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
/*
concatArrayV1: nối các mảng
hàm nhận vào mảng 1, mảng 2, mảng 3
sau khi xử lý xong thì mảng 1 và mảng 2 không đổi
còn mảng 3 là mảng 1 + mảng 2
reverseArray: đảo ngược mảng
    hàm nhận vào 1 mảng array, đảo ngược các phần tử trong mảng
    kích thước không bị thay đổi
    c1: nhét
*/
