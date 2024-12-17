#include <stdio.h>
#include <stdlib.h>
//deleteArrayInArray
//xoa het cac mang con trong mang
//case test: 2 1 1 3 5 3 5 7
//sub: 1 3 5
//result: 2 7
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int arrayInArray(int arr[], int size, int sub[], int sizeSub);
void deleteArrayString(int arr[], int* size, int sub[], int sizeSub);
int main()
{
    int arr[] = {2, 1, 3, 1, 3, 5, 4, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int arrS[] = {1, 3, 5};
    int sizeS = sizeof(arrS) / sizeof(arrS[0]);
    deleteArrayString(arr, &size, arrS, sizeS);
    printf("\nMang ne: ");
    outputArray(arr, size);
    return 0;
}
void deleteArrayString(int arr[], int* size, int sub[], int sizeSub){
    int pos;
    do{
    pos = arrayInArray(arr, *size, sub, sizeSub);
    if(pos == -1) break;
    for(int i = pos; i <= sizeSub + pos; i++){
        arr[i] = arr[sizeSub + i];
    }
    *size -= sizeSub;
    }while(pos != -1);
}

int arrayInArray(int arr[], int size, int sub[], int sizeSub){
    int j = 0;
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == sub[j]){
            j++;
            if(j == sizeSub){
                return i - sizeSub + 1;
            }
        }else{
            i -= j;
            j = 0;
        }
    }
    return -1;
}





void inputArray(int arr[], int* size){
    printf("\nNhap kich thuoc di ku: ");
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
