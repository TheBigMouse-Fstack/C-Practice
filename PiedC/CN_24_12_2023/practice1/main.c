#include <stdio.h>
#include <stdlib.h>
//1.Viết hàm nhận vào một số nguyên, trả ra 1 nếu là số nguyên tố và 0 nếu không phải
int isPrime(int number);
int main()
{
    int number;
    printf("\nNhap so di em: ");
    scanf("%d", &number);
    printf("\nKet qua la: %d", isPrime(number));
    return 0;
}
int isPrime(int number){
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
