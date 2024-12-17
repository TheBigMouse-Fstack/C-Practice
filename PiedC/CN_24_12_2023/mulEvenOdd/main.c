#include <stdio.h>
#include <stdlib.h>
/*
    Nhập vào 1 số nguyên dương n >= 2
    Tính tích các số chẵn | tích các số lẻ trong đoạn từ 1 -> n-1
vd: n = 5
tích các số chẵn: 8 => 2*4
tích các số lẽ: 3 => 1*3
*/
int main()
{
    int n;
    char buffer;
    int tichChan = 1;
    int tichLe = 1;
    int hasEven = 0;
    int hasOdd = 0;
    do{
        printf("\nNhap so nguyen duong >=2 di em: ");
        scanf("%d", &n);
        scanf("%c", &buffer);
        if(buffer != 10 || n < 2){
            printf("\nNhap lai di ku!");
        }

    }while(buffer != 10 || n < 2);
    for(int i = 1; i <= n - 1; i++){
        if(i % 2 == 0){
            tichChan *= i;
            hasOdd = 1;
        }
        if(i % 2 == 1){
            tichLe *= i;
            hasEven = 1;
        }
    }
    tichChan *= hasOdd;
    tichLe *= hasEven;
    printf("\nTich chan: %d", tichChan);
    printf("\nTich le: %d", tichLe);
    return 0;
}
