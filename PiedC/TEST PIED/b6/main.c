#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
int sumOnlyOneElement(int number);
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int isPrime(int number);
int sumElement(int number);
int main()
{
    int arrMain[MAX];
    int sizeMain;
    int sum = 0;
    inputArray(arrMain, &sizeMain);
    for(int i = 0; i <= sizeMain - 1; i++){
        if(isPrime(sumElement(arrMain[i]))){
            sum += arrMain[i];
        }
    }
    printf("\nKet qua: %d", sum);
    return 0;
}
//dequy :))
int sumElement(int number){
    int element = 0;
    do{
        element += number % 10;
        number = number / 10;
    }while(number != 0);
    if(element > 10){
        return sumElement(element);
    }
    return element;
}

int isPrime(int number){
    for(int i = 2; i <= number - 1; i++){
        if(number % i == 0) return 0;
    }
    return number >= 2;
}



void inputArray(int arr[], int* size){
    printf("\nNhap size di em: ");
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
