#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("\nNhap so di em: ");
    scanf("%d", &number);
    int count = 0;
    int numberForCount = number;
    int chuSo;
    int realPrime = 0;
    do{
        numberForCount = numberForCount / 10;
        count += 1;
    }while(numberForCount != 0);
    do{
        chuSo = number % 10;
        realPrime += chuSo * pow(10, (count - 1));
        number = number / 10;
        count -= 1;
    }while(number != 0);
    printf("%d", realPrime);
    return 0;
}
