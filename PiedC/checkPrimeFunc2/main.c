#include <stdio.h>
#include <stdlib.h>
//int - void
int checkPrimeV2(void);
int main()
{
    int isPrime = checkPrimeV2();
    printf(isPrime == 1 ? "\nNo la Prime" : "\nNo deo phai Prime");
    return 0;
}
int checkPrimeV2(void){
    int number;
    printf("\nNhap so vo di ku: ");
    scanf("%d", &number);
    if(number >= 2){
        int isPrime = 1;
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
