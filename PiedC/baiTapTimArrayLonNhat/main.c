#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int arr[], int* size);
int comparativeMaxArray(int arr[], int size);
int main()
{
    int arr[MAX];
    int size = 0;
    inputArray(arr, &size);
    printf("\nSo lon nhat trong day la: %d", comparativeMaxArray(arr, size));
    return 0;
}
int comparativeMaxArray(int arr[], int size){
    int maxArray = arr[0];
    for(int i = 0; i <= size - 1; i++){
        if(maxArray < arr[i]){
            maxArray = arr[i];
        }
    }
    return maxArray;
}
void inputArray(int arr[], int* size){
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);

    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap value vao arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
