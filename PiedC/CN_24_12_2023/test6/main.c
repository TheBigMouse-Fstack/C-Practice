#include <stdio.h>
#include <stdlib.h>
//nhập vào n, tìm số nguyên tố lớn nhất trong khoảng từ 1 -> n
//sao cho nó có tổng là các số nguyên tố liên tiếp trước nó.
int checkPrime(int number);
int main()
{
    int n;
    int isPrime;
    printf("\nNhap n di em: ");
    scanf("%d", &n);
    for(int number = 0; number <= n; number++){
        isPrime = checkPrime(number);
        if(isPrime){
            printf("%5d", number);
        }
    }


    return 0;
}
int checkPrime(int number){
    if(number >= 2){
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
