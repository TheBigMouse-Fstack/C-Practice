#include <stdio.h>
#include <stdlib.h>
//29-sumPrime
/*
    nhap vao start va end
trong doan start den end neu co so nguyen to nao thi in ra man hinh
    tinh tong cac so do
    dem cac so do
*/
int isPrime(int number);
int main()
{
    int start, end;
    printf("\nNhap start: ");
    scanf("%d", &start);
    printf("\nNhap end: ");
    scanf("%d", &end);
    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    int sum = 0, count = 0;
    //     2      5
    //number: 2 3 4 5
    for(int number = start; number <= end; number++){
        //kiem tra number co phai snt hay khong
        if(isPrime(number)){
            printf("%5d", number);
            sum += number;
            count++;
        }
    }
    printf("\nTong la:  %d ", sum);
    printf("\nCount: %d ", count);
    return 0;
}
int isPrime(int number){
    for(int i = 2; i <= number - 1; i++){
        if(number % i == 0){
            return 0;
        }
    }
    return number >= 2;
}

