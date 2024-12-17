#include <stdio.h>
#include <stdlib.h>

const int MAX = 100;
void input( int array[], int*size);
void output( int array[], int size);
int isprime(int number);
int sumprime (int array[], int size);
int main()
{
    int arrmain[MAX];
    int sizemain;
    input(arrmain , &sizemain);
    printf("\nMang la: ");
    output(arrmain , sizemain);
    printf("\ntong la: %d", sumprime(arrmain, sizemain));
    return 0;
}
void input ( int array[], int*size){
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap array[%d] : ", i);
        scanf("%d", &array[i]);
    }
}
void output(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d",array[i]);
    }
}
int isprime(int number){
    if(number > 1){
        for(int i = 2 ; i <= number -1 ; i++){
            if(number%i == 0){
                return 0;
            }
            }
            return 1;
    }
    return 0;
}
int sumprime (int array[], int size){
    int sumprime = 0;
    for(int i = 0; i <= size - 1; i++){
        if(isprime(array[i])){
            sumprime+= array[i];
        }
    }
    return sumprime;
}
