#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    char buffer;
    float result = 0;
    do{
    printf("\nNhap so vo di em: ");
    scanf("%d", &number);
    scanf("%c", &buffer);
    fflush(stdin);
    if(buffer != 10 || number <= 0)
        printf("Nhap lai di thang chos ");
    }while(buffer != 10 || number <= 0);

    for(int i = 1; i <= number; i++){
        if(i % 2 == 0){
            result -= (2*(float)i)/(2*i + 1);
        }else{
            result += (2*(float)i)/(2*i + 1);
        }
    }
    printf("Ket qua la: %f", result);
    return 0;
}
