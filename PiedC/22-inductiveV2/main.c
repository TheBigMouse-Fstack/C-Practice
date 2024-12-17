#include <stdio.h>
#include <stdlib.h>
//22-inductiveV2
//nhập vào số nguyên dương n >= 1
//tính tổng của 1 + 1/3 + 1/6 + 1/(1 + 2 + 3 + ... + n)
int main()
{
    int number;
    char buffer;
    do{
        printf("\nNhap n di em: ");
        scanf("%d", &number);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer != 10 || number < 1){
            printf("\nSo nguyen va > 1 nha!!! ");
        }
    }while(buffer != 10 || number  < 1);
    float cong = 1;
    float dapan = 1;
    for(int i = 2; i <= number; i++){
        cong += i;
        dapan += 1/cong;
    }printf("\nTong = %.2f", dapan);

    return 0;
}
