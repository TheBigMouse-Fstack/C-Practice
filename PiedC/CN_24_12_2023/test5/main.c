#include <stdio.h>
#include <stdlib.h>
//nhập start và end
//tìm các số nguyên tố trong khoảng từ start đến end sao cho đảo ngược của số đó cũng là số nguyên tố
int isPrime(int number);
int rotateNumber(int numberPrime);
int main()
{
    printf("ket qua %d", rotateNumber(5));
    int start, end;

    printf("\nNhap start: ");
    scanf("%d", &start);
    printf("\nNhap end: ");
    scanf("%d", &end);
    printf("\nDay cac so la so nguyen to va dao nguoc cua no cung la so nguyen to:");
    for(int number = start; number <= end; number++){
        if(isPrime(number) && isPrime(rotateNumber(number))){
            printf("%5d", number);
        }
    }


    return 0;
}
int isPrime(int number){//hàm để checkPrime
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
int rotateNumber(int number){//hàm này để đảo ngược số lại (số thực dùng được)
    /*int count = 0;
    int numberForCount = number;
    int chuSo;
    int result = 0;
    do{
        numberForCount = numberForCount / 10;
        count += 1;
    }while(numberForCount != 0);
    do{
        chuSo = number % 10;
        realPrime += chuSo * pow(10, (count - 1));//10^3 = 1000
        number = number / 10;
        count -= 1;
    }while(number != 0);*/
    int result = 0;
    while(number != 0){
        result += (number % 10);
        number /= 10;
        if(number == 0) break;
        result *= 10;
    }
    return result;

}


