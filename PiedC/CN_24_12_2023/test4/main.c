#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    char buffer;
    do{
        printf("\nNhap so nguyen di em: ");
        scanf("%d", &number);
        scanf("%ch", &buffer);
        fflush(stdin);
        if(buffer != 10 && number <= 0){
            printf("\nNhap lai di cu:  ");
        }
    }while(buffer != 10 && number <= 0);
    int sum = 0;
    int mul = 1;
    int middle = 0;
    for(int i = number; i >= 0; i = number / 10){
        sum += number;
        mul *= number;
    }
    printf("Tich %d", mul);
    printf("Tong %d", sum);
    return 0;
}
