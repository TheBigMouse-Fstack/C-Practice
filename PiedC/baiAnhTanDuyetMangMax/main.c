#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
void maxString(int arr[], int size, int tmp[], int* sizeTmp);

int main()
{
    int tmp[MAX];
    int sizeTmp = 0;
    int arr[] = {1, 2, 4, 0, -2, -1, 0, 1, 2, 3, 2, -1};
    int size = sizeof(arr) / sizeof(arr[0]);
    maxString(arr, size, tmp, &sizeTmp);
    printf("\nMang ne: ");
    outputArray(tmp, sizeTmp);
    return 0;
}
void maxString(int arr[], int size, int tmp[], int* sizeTmp){
    //1, 2, 3, 4, 0, 2, 4, 0, 1, 2, 3, 4, 5, 6
    //0, 1, 2, 3, 4, 5, 6
    //tmp 0, 1, 2, 3, 4, 5, 6
    int sumMain = -1000;
    int sum = arr[0];
    int count = 0;
    int countMain = 0;
    int posEnd = 0;
    for(int i = 0; i <= size - 1; i++){

        if(arr[i] == arr[i + 1] - 1){
            sum -= arr[i];
            sum += arr[i] + arr[i + 1];
            count++;// 1

        }else{
            if(sumMain < sum){
                sumMain = sum;//sumMain = 10
                printf("\nSum ne: %d", sumMain);
                printf("\nSum ne: %d", sum);
                posEnd = i; //i = 3
                countMain = count;//count = 3
            }
            sum = arr[i + 1];//sum = 0
            count = 0;
        }
    }
    *sizeTmp = 0;
    for(int i = posEnd - countMain; i <= posEnd; i++){
        tmp[*sizeTmp] = arr[i];
        (*sizeTmp)++;
    }
}






void inputArray(int arr[], int* size){
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap value vao arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
