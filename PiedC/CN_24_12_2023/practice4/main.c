#include <stdio.h>
#include <stdlib.h>
//5.Nhập vào số nguyên dương n, tính trung bình cộng của các chữ số trong n
float trungBinhCong(int n);
int main()
{
    int n;
    char buffer;
    do{
        printf("\nNhap vo di em: ");
        scanf("%d", &n);
        scanf("%ch", &buffer);
        fflush(stdin);
        if(buffer != 10 || n < 0)
        printf("\nNhap lai di em!");
    }while(buffer != 10 || n < 0);
    printf("\nKet qua la : %.2f", trungBinhCong(n));
    return 0;
}
float trungBinhCong(int n){
    int chuso = 0;
    int count = 0;
    do{
        chuso += n % 10;
        count++;
        n = n / 10;
    }while(n != 0);
    return (float)chuso/(float)count;
}
