#include <stdio.h>
#include <stdlib.h>
//28-checkPrimeV4: isPrime co vao co ra
//kiem tra so nguyen co phai so nguyen to khong?
int isPrime(int number);
int main()
{
    int number;
    printf("\nNhap di em: ");
    scanf("%d", &number);
    if(isPrime(number)){
        printf("\n%d is Prime", number);
    }else{
        printf("\n%d is not Prime", number);
    }
    return 0;
}
int isPrime(int number){//build
    for(int i = 2; i <= number - 1; i++){
        if(number % i == 0){
            return 0;
        }
    }
    return number >= 2;
}
