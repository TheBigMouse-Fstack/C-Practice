#include <stdio.h>
#include <stdlib.h>
//43 - delSubInArr
int const MAX = 100;
void inputArray(int arr[], int *size);
void outputArray(int arr[], int size);
int  splice(int arr[], int *size,int pos,   int amount);
int arrInArrV2(int arr[], int size,int arrS[],int sizeS);
int delSubInArr(int arr[],int *size,int sub[],int sizeSub);

int main()
{
    int arr[] = {2,1,3,1,3,4,4,7};
    int size = sizeof(arr) / sizeof(arr[0]); //hàm sizeof của c++
    int arrS[] = {1,3,4};
    int sizeS = sizeof(arrS) / sizeof(arrS[0]);
    delSubInArr(arr,&size,arrS,sizeS);
    printf("\nArr: ");
    outputArray(arr, size);
    return 0;
}

int delSubInArr(int arr[],int *size,int sub[],int sizeSub){
    while(splice(arr, size, arrInArrV2(arr, *size, sub, sizeSub), sizeSub));
}
int arrInArrV2(int arr[], int size,int arrS[],int sizeS){
    int check = 0;
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == arrS[check]){
           if(check == sizeS - 1) return i - check;
            check++;
        }else{
            i -= check;
            check = 0;
        }
    }
    return -1;
}

int  splice(int arr[], int *size, int pos, int amount){
    if(pos < 0 || pos >= *size) return 0;
    for(int i = pos; i <= *size - 1; i++){
        arr[i] = arr[i + amount];
    }
    amount = (pos + amount <= *size - 1) ? amount : *size - pos;
    (*size) -= amount;
    return 1;
}

void inputArray(int arr[], int *size){
    printf("\nKich thuoc: ");
    scanf("%d", size);
    for(int i = 0; i<= *size - 1; i++){
        printf("\nArr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i<= size - 1; i++){
        printf("%5d", arr[i]);
    }
}

