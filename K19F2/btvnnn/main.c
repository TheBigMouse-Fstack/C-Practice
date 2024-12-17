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
void inputarray(int array[], int*size);
void outputarray(int array[], int size);
int comparearray(int arr1[], int size1 , int arr2[], int size2);
int main()
{
    int arr1[100];
    int size1;
    int arr2[100];
    int size2;

    inputarray(arr1,&size1);
    inputarray(arr2,&size2);
    printf("\nMang1 la: ");
    outputarray(arr1,size1);
    printf("\nMang2 la: ");
    outputarray(arr2,size2);
    printf("\n%d",comparearray(arr1,size1,arr2,size2));
    return 0;
}
void inputarray(int array[], int*size){
    printf("\nNhap kich thuoc : ");
    scanf("%d", size);
    for(int i = 0 ; i<= *size - 1; i++){
        printf("\nNhap array[%d]: ",i);
        scanf("%d",&array[i]);
    }
}
void outputarray(int array[], int size){
    for(int i = 0 ; i<= size -1 ;i++){
        printf("%4d",array[i]);
    }
}
int comparearray(int arr1[], int size1 , int arr2[], int size2){
    int a = 0;
    int b = size1 - 1;
    if(size1 > size2){
         b = size2 - 1;
    }
    while(a <= b){
    if(arr1[a] > arr2[a]){
        return 1;
    }
    if(arr1[a] < arr2[a]){
        return -1;
    }
    if(arr1[a] == arr2[a]){
        a++;
    }
    }
    return 0;
}

