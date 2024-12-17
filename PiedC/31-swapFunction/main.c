#include <stdio.h>
#include <stdlib.h>
//Viet ham nhan vao numA và numB, ham co nhiem vu đoi gia tri trong numA va numB
//o ngoai main ta goi ham tren va dua vao 2 bien voi mong muon doi gia tri
//xem thu hai bien ta dua vao ham co swap duoc khong
void swapFunction(int numA, int numB);
void swapFunctionV2(int* numA, int* numB);
int main()
{
    int numA, numB;
    printf("\nNhap numA: ");
    scanf("%d", &numA);
    printf("\nNhap numB: ");
    scanf("%d", &numB);
    swapFunctionV2(&numA, &numB);
    printf("\nNumberA main = %d", numA);
    printf("\nNumberB main = %d", numB);
    return 0;
}
void swapFunctionV2(int* numA, int* numB){
    int tmp = *numA;
    *numA = *numB;
    *numB = tmp;
}
//pass by value: truyền tham trị nên thay đổi dưới này không ảnh hưởng gì ở trên main cả
void swapFunction(int numA, int numB){
    int tmp = numA;
    numA = numB;
    numB = tmp;
    printf("\nNumberA func = %d", numA);
    printf("\nNumberB func = %d", numB);
}

