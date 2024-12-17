#include <stdio.h>
#include <stdlib.h>

int sumearreven (int arr[], int sizemain);
int main()
{
    const int MAX = 100;
    int arrmain[MAX];
    int sizemain;
    printf("\nNhap so luong: ");
    scanf("%d", &sizemain);
    for(int i = 0; i <= sizemain - 1; i++){
        printf("\nNhap arr [%d]: ",i);
        scanf("%d", &arrmain[i]);
    }
    int result = sumarreven (arrmain , sizemain);
    printf("\ntong so o vi tri chan la: %d", result);
    return 0;
}
int sumarreven (int arr[], int sizemain){
    int sum = 0;
    for(int i = 0; i <= sizemain - 1; i++){
        if(i % 2 == 0){
            sum += arr[i];
        }
    }
    return sum;
}
