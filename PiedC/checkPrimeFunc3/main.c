#include <stdio.h>
#include <stdlib.h>
//void - int
void checkPrimeV3(int number);
int main()
{
    int number;
    printf("\nNhap mot so vo di em iu: ");
    scanf("%d", &number);
    checkPrimeV3(number);
    return 0;
}
void checkPrimeV3(int number){
    if(number >= 2){
        int isPrime = 1;
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                isPrime = 0;
                break;
            }
        }
        printf(isPrime ? "No la Prime" : "No del phai Prime");
    }
}
