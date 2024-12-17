#include <stdio.h>
#include <stdlib.h>
//20-sumAllElement
/*
nhap vao 1 so nguyen duong n
tinh tong cac don vi cua n

vd n = 1234
==> result = 10

vd n = 3234
==> result = 12
*/
int main()
{
    int a;
    int sum = 0;
    int dem = 0;
    printf("\nNhap so di em: ");
    scanf("%d", &a);
    while(a != 0){
        sum += a % 10;
        a /= 10;
    }
    /*
    for(int i = a; i > 0; i /= 10){
        dem = i % 10;
        sum += dem;
    }
    */
    printf("\n%d", sum);
    return 0;
}
