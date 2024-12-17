#include <stdio.h>
#include <stdlib.h>
//09-inductiveResult
/*
nhap vao 1 so nguyen n
xuat ra man hinh ket qua cua
1^n + 2^n + 3^n + ... + n^n

vd:
nhap n:4
in ra man hinh ket qua cua 1^4 + 2^4 + 3^4 + 4^4
*/
int main()
{
    int a;
    int sum = 0;
    printf("\nNhap a = ");
    scanf("%d", &a);
    if(a < 0){
        printf("\nDeobietdocdehamay!!!");
    }else{
        for(int i = 1; i <= a; i++){
            sum += pow(i, a);
        }
        printf("\nTong = %d", sum);
    }



    return 0;
}
