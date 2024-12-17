#include <stdio.h>
#include <stdlib.h>
/*
6.Viết hàm nhận vào một số thực, trả ra 1 nếu đảo ngược phần dư của nó là số nguyên tố, và 0 nếu k phải.
vd: 4.13 => 1
vd: 8.91 => 1
vd: 12.32=> 1
vd: 10.23 => 0
vd: 11.43 => 0
*/

int main()
{
    float n;
    int rev;
    float a;
    printf("\nnhap n: ");
    scanf("%f", &n);
    a = n % 100;
    printf("%f" , a);
    return 0;
}
