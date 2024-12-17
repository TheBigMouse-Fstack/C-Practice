#include <stdio.h>
#include <stdlib.h>
//21-primeFormat
//ep nguoi dung nhap alphabet thuong
//sau do in ra duoi dang so, chu, octal
int main()
{
    char ch;

    do{
        printf("\nNhap ky tu di: ");
        scanf("%c", &ch);
        fflush(stdin);
        if(ch < 'a' || ch > 'z'){
            printf("\nPhai nhap chu thuong nha!!!");
        }
    }while(ch < 'a' || ch > 'z');

    printf("\n%c %d %o", ch, ch, ch);



    return 0;
}
