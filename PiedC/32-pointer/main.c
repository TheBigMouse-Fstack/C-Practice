#include <stdio.h>
#include <stdlib.h>
//32-pointer

int main()
{
    int tt = 200;//tao ra bien bth, luu gia tri bth
    int* hari = &tt;//bien pointer, luu dia chi cua bien ma no muon dieu khien
    printf("\nValue tt: %d", tt);//200
    printf("\nAddress tt: %u", &tt);//6422036
    printf("\nValue hari: %u", hari);//6422036
    printf("\nAddress hari %u", &hari);//6422032
    printf("\nHook hari: %d", *hari);//200
    *hari -= 150; //tt -= 150
    printf("\nValue tt: %d", tt);//50
    return 0;
}
