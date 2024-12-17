#include <stdio.h>
#include <stdlib.h>
int sumElement(int number);
int sumElementV2(int number);

int main()
{
    int number;
    printf("\nNhap so di em: ");
    scanf("%d", &number);
    printf("\nTong la: %d ", sumElement(number));
    return 0;
}
int sumElement(int number){
    int sum = 0;
    do{
    sum += number % 10;
    number = number / 10;
    }while(number != 0);
    return sum;
}
int sumElementV2(int number){
    if(number == 0) return 0;
    return number % 10 + sumElementV2(number / 10);
    //de quy la mot dang cua vong lap duoi dang ham
}
