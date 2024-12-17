#include <stdio.h>
#include <stdlib.h>
//viet ham tinh tong cac so Fibonacci trong mang
//viet ham xoa cac phan tu bi trung trong mang

const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
void deleteTrung(int arr[], int* size);
int splice(int arr[], int* size, int pos, int amount);
int fibonacii(int number);
int fibonaciiArray(int arr[], int size);
void arrayforFibo(int arrF[], int* sizeF, int res);
//1 1 2 3 5 8 13
// 8 0 8 98 79
//0 1 2 3 4 5 6


int main()
{
    int arr[] = {2, 3, 1, 9, 9, 7, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    deleteTrung(arr, &size);
    outputArray(arr, size);
    return 0;
}



int fibonaciiArray(int arr[], int size){
    int max = arr[0];
    for(int i = 0; i <= size - 1; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return fibonacii(max);
}
int fibonacii(int number){

    if(number == 1 || number == 2) return 1;
    return fibonacii(number - 2) + fibonacii(number - 1);
}


void deleteTrung(int arr[], int* size){
    for(int i = 0; i <= *size - 2; i++){
        for(int j = i + 1; j <= *size - 1; j++){
            if(arr[i] == arr[j]){
                for(int k = j; k <= *size - 1; k++){
                    arr[k] = arr[k + 1];
                }
                (*size)--;
            }else{
                j++;
            }
        }
    }
}

















/*void deleteTrung(int arr[], int* size){
    for(int i = 0; i <= *size - 2; i++){
        for(int j = i + 1; j <= *size - 1; j++){
            if(arr[i] == arr[j]){
                for(int k = j; k <= *size - 1; k++){
                    arr[k] = arr[k + 1];
                }
                (*size)--;
            }else{
                j++;
            }
        }
    }
}*/

int splice(int arr[],int* size, int pos, int amount){
    if(pos < 0 || pos >= *size) return 0;
    amount = *size - pos >= amount ? amount : *size - pos;
    for(int i = pos; i <= *size - 1; i++){
        arr[pos] = arr[pos + amount];
    }
    (*size) -= amount;
    return 1;
}

void inputArray(int arr[], int* size){
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap gia tri vo arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
