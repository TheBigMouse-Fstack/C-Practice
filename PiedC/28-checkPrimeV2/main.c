#include <stdio.h>
#include <stdlib.h>
//28-checkPrimeV2: co vao khong ra
//kiem tra so nguyen co phai so nguyen to khong?
void checkPrimeV2(int number);//khai bao
int main()
{
    int number;
    printf("\nNhap number di ku: ");
    scanf("%d", &number);
    checkPrimeV2(number);
    return 0;
}
void checkPrimeV2(int number){//build
    if(number >= 2){
        for(int i = 2; i <= number - 1;  i++){
            if(number % i == 0){
                printf("\n%d is not Prime", number);
                return;
            }
        }
        printf("\n%d is prime", number);
    }else{
        printf("\n%d is not prime", number);
    }
}
