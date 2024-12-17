#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    char buffer;
    int result = 0;
    do{
    printf("\nNhap so vo di em: ");
    scanf("%d", &number);
    scanf("%c", &buffer);
    fflush(stdin);
    if(buffer != 0 && number <= 0)
        printf("Nhap lai di thang chos ");
    }while(buffer != 0 && number <= 0);

    for(int i = 1; i <= number; i++){
        if(i % 2 == 0){
            result += i;
        }else{
            result -= i;
        }
    }
    printf("Ket qua cua em la: %d", result);

    return 0;
}

