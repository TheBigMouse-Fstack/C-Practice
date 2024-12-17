#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chuThuong;
    printf("\nNhap chu thuong vo di em ");
    scanf("%c", &chuThuong);
    fflush(stdin);

    if(ch >= 97 && ch <= 122){
        ch -= 32;
    }

    printf("\nch = %c", ch);
    return 0;
}
