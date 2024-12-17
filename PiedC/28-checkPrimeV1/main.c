#include <stdio.h>
#include <stdlib.h>
//kiem tra so nguyen co phai so nguyen to khong?
//28-checkPrimeV1: khong vao khong ra
void checkPrimeV1(void);//khai bao
int main()
{
    checkPrimeV1();//call
    return 0;
}
void checkPrimeV1(void){//build
    int number;
    printf("\nNhap so di em: ");
    scanf("%d", &number);
    if(number >= 2){
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                printf("\n%d khong la Prime", number);
                return 0;
            }
        }
        printf("\n%d la Prime", number);
    }else{
        printf("\n%d khong la Prime", number);
    }
}
