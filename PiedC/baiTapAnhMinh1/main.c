#include <stdio.h>
#include <stdlib.h>
//Bài 1: Nhập vào n nguyên dương. Đếm số lượng chữ số của n là số nguyên tố.

//Ví dụ
//Đầu vào: 1222333999888 .Kết quả: 6

int main()
{
    int number;
    int dem = 0;
    int demPrime = 0;
    int isPrime = 1;
    printf("\nNhap so vo di cu: ");
    scanf("%d", &number);
    do{
        dem = number % 10;
        if(dem >= 2){
            isPrime = 1;
            for(int i = 2; i <= dem - 1; i++){
                //isPrime = 1;
                if(dem % i == 0){
                    isPrime = 0;
                }
                if(isPrime == 1){
                    demPrime += 1;
                }
            }
        }
        if(dem == 2){
            demPrime += 1;
        }
        number = number / 10;

    }while(number != 0);
    printf("%5d", demPrime);
    return 0;
}
