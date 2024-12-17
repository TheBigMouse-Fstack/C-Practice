#include <stdio.h>
#include <stdlib.h>
//28-checkPrimeV3: khong vao, co ra
//kiem tra so nguyen co phai so nguyen to khong?
//ham tu xin mot so nguyen
//kiem tra so nguyen do co phai nguyen to khong?
//nem ra 1 neu la nguyen to, va 0 neu k phai
int checkPrimeV3(void);//khai bao
int main()
{
    int isPrime = checkPrimeV3();
    printf(isPrime ? "No la Prime" : "No del phai Prime");
    return 0;
}
int checkPrimeV3(void){
    int number;
    printf("\nNhap so di ku: ");
    scanf("%d", &number);
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
