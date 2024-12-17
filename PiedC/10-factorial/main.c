#include <stdio.h>
#include <stdlib.h>
//10-factorial
//initialvalue: gia tri khoi tao mac dinh
/*
nhap vao so nguyen n
tinh giai thua so n (tinh n!)
vd:
nhap n: 5
tinh 5!= 120
120 la ket qua cua 5*4*3*2*1 => 1*2*3*4*5
*/
int main()
{
    int a;
    int giaithua = 1;
    printf("\nNhap a: ");
    scanf("%d", &a);
    for(int i = 1; i <= a; i++){
        giaithua *= i;
    }
    printf("Giai thua cua so %d la: %d", a, giaithua);

    return 0;
}
