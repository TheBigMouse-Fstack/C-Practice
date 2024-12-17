#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int isPrime(int number);
int sumPrimeInArray(int arr[], int size);
int main()
{
    int arrMain[MAX];
    int sizeMain;
    inputArray(arrMain, &sizeMain);
    printf("\nMang ne: ");
    outputArray(arrMain, sizeMain);
    printf("\nKet qua ne: %d", sumPrimeInArray(arrMain, sizeMain));
    return 0;
}
int sumPrimeInArray(int arr[], int size){
    int sumPrime = 0;
    for(int i = 0; i <= size - 1; i++){
        if(isPrime(arr[i]) == 1){
            sumPrime += arr[i];
        }
    }
    return sumPrime;
}



int isPrime(int number){
    for(int i = 2; i <= number - 1; i++){
        if(number % i == 0) return 0;
    }
    return number >= 2;
}
void inputArray(int arr[], int* size){
    printf("\nNhap size di: ");
    scanf("%d", size);

    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap value arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
