#include <stdio.h>
#include <stdlib.h>
/*
    reverseArray: đảo ngược mảng (cưa đôi mảng ra để làm)
        c1: nhét theo chiều ngược
        c2: swap đối xứng với trục giữa
*/
void reverseArray(int arr[], int size);
void outputArray(int arr[], int size);
int main()
{
    int arr1[100] = {3, 5, 7, 10, 1};
    int size1 = 5;
    int arr2[100] = {3, 9, 8, 2, 5, 7};
    int size2 = 6;
    reverseArray(arr2, size2);
    outputArray(arr2, size2);

    return 0;
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
void reverseArray(int arr[], int size){
    for(int i = 0; i <= size / 2; i++){
        int tmp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = tmp;
    }
}
