#include <stdio.h>
#include <stdlib.h>

/*Viết Hàm Nhận Vào 2 biến a và b,
swap giá trị của 2 biến đó, và in ra địa chỉ của 2 biến đó trong thanh Ram ! ( Hàm có đầu vào, không có đầu ra ) ( 6p )*/
void inputswap(int*a, int*b);
int main()
{
    int a,b;
    printf("\nNhap a: ");
    scanf("%d", &a);
    printf("\nNhap b: ");
    scanf("%d", &b);
    inputswap(a,b);
    return 0;
}
void inputswap(int*a, int*b){
    int tmp = a;
    a = b;
    b = tmp;
    printf("\ndia chi cua a: %d", &a);
    printf("\ndia chi cua b: %d", &b);
}

