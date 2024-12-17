#include <stdio.h>
#include <stdlib.h>
//void - void
void checkPrimeV1 (void);
int main()
{
    checkPrimeV1();
    return 0;
}
void checkPrimeV1 (void){
    int number;
    printf("\nNhap so vo di em: ");
    scanf("%d", &number);
    if(number >= 2){
        int isPrime = 1;
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                isPrime = 0;
                break;
            }
        }
        printf(isPrime ? "\nDo la so nguyen to" : "\nKhong phai so nguyen to");
    }
}
