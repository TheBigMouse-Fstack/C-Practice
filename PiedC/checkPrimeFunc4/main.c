#include <stdio.h>
#include <stdlib.h>
//int - int
int checkPrimeV4(int number);
int main()
{
    int number;
    printf("\nNhap so do di em: ");
    scanf("%d", &number);
    int isPrime = checkPrimeV4(number);
    printf(isPrime ? "No la Prime" : "No khong phai Prime");
    return 0;
}
int checkPrimeV4(int number){
    int isPrime = 0;
    if(number >= 2){
        isPrime = 1;
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                isPrime = 0;
                break;
            }
        }
        return isPrime;
    }else{
        return isPrime;
    }
}
