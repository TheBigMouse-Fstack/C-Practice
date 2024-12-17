#include <stdio.h>
#include <stdlib.h>
//6.viết hàm nhận vào n, tính tổng các số chẳn từ 1 đến n
int sumEven(int n);
int main()
{
    int number;
    printf("\nNhap number di ku: ");
    scanf("%d", &number);
    printf("\nTong Even: %d", sumEven(number));
    return 0;
}
int sumEven(int n){
    int sumEven = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            sumEven += i;
        }
    }
    return sumEven;
}
