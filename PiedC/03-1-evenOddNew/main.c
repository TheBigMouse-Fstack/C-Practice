#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chieuCaoNhuY;
    printf("Hay nhap chieu cao Nhu Y: ");scanf("%d", &chieuCaoNhuY);
    printf(chieuCaoNhuY > 170 ? "Cao" : "Lun vailon");
    /*
    int a;
    printf("Nhap a= ");
    scanf("%d", &a);
    printf(a % 2 == 0 ? "even" : "odd");
    return 0;
    */
}
