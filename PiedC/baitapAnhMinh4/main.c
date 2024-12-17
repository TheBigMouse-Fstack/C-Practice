#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    char buffer;
    int i;
    do{
        printf("\nNhap so vo di em: ");
        scanf("%d", &number);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer != 10 || number < 0)
            printf("\nNhap lai di");
    }while(buffer != 10 || number < 0);
    while(number != 0){
        i = number % 10;
        number = number / 10;
        printf("%d", i);
    }
    return 0;
}

