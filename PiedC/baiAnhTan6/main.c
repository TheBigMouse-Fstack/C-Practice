#include <stdio.h>
#include <stdlib.h>
//-	Viết chương trình nhận vào 1 số nguyên, tính tổng, tích các thành phần và in ra số đó dưới dạng đảo ngược ( 4p )
int sumNum(int number);
int mulNum(int number);
void rotateNum(int number);
int main()
{
    int number;
    char buffer;
    do{
    printf("\nNhap so vo di em: ");
    scanf("%d", &number);
    scanf("%c", &buffer);
    fflush(stdin);
    if(buffer != 10){
        printf("\nMay biet nhap so khong: ");
    }
    }while(buffer != 10);
    int sum = sumNum(number);
    printf("\nTong la: %d", sum);
    int mul = mulNum(number);
    printf("\nTich la: %d", mul);
    rotateNum(number);

    return 0;
}
int sumNum(int number){
    int sum = 0;
    do{
        sum += number % 10;
        number = number / 10;
    }while(number != 0);
    return sum;
}
int mulNum(int number){
    int mul = 1;
    do{
        mul *= number % 10;
        number = number / 10;
    }while(number != 0);
    return mul;
}
void rotateNum(int number){
    int rotate = 0;
    printf("\nSo dao nguoc la: ");
    do{
        rotate = 0;
        rotate = number % 10;
        printf("%d", rotate);
        number = number / 10;
    }while(number != 0);
}
