#include <stdio.h>
#include <stdlib.h>
void inputarr(int array[], int*size);
int checkprime ( int number);
int checkchinhphuong(int array[], int size);
int sumarray(int array[], int size );
int main()
{
    int arrmain[100];
    int sizemain = 0;
    inputarr(arrmain,&sizemain);
    printf("\nKet qua la:%d",sumcheckchinhphuong(arrmain,sizemain));
    return 0;
}
void inputarr(int array[], int*size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0 ; i <= *size - 1;i++ ){
        printf("\nNhap array[%d]: ",i);
        scanf("%d", &array[i]);
    }
}
int checkprime ( int n){
    int tmp = n;
    int a = 0;
    while(tmp > 0){
        a = tmp % 10;
        tmp = tmp / 10;
    }
    if(a > 1 ){
        for(int i = 2 ; i <= a - 1 ; i++){
            if(a % i == 0){
                return 0;
            }else{
                return n;
            }
        }
        return n;
    }
    return 0;
}
int sumcheckchinhphuong(int array[], int size){
    int sum = 0;
    for(int i = 0 ; i<= size - 1; i++){
        int n = checkprime(array[i]);
        int a = 0;
        a = n % 10;
        if(sqrt(a) == (float)sqrt(a)){
            sum += n;
        }
    }
    return sum;
}

