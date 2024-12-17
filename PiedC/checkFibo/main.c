#include <stdio.h>
#include <stdlib.h>
int fibonacii(int number);
void fibonaciiArray(int arr[], int* size);
void outputArray(int arr[], int size);

int main()
{
    int arr[100];
    int size = 0;
    fibonaciiArray(arr, &size);
    outputArray(arr, size);
    return 0;
}
void fibonaciiArray(int arr[], int* size){
    arr[0] = 1;
    arr[1] = 1;
    for(int i = 0; i <= 20; i++){
        arr[i + 2] = arr[i] + arr[i + 1];
        if(i + 2 == 20){
            *size = 20;
            return;
        }
        arr[i] = arr[i + 1];
        arr[i + 1] = arr[i + 2];

    }

}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}

int fibonacii(int number){
    if(number == 1 || number == 2) return 1;
    return fibonacii(number - 2) + fibonacii(number - 1);
}
