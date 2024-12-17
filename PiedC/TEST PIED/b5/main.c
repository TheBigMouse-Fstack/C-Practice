#include <stdio.h>
#include <stdlib.h>
int ghepChuSo(int n);
int main()
{
    int n;
    printf("\nNhap n di: ");
    scanf("%d", &n);
    printf("\nKet qua ne: %d ", ghepChuSo(n));
    return 0;
}
int ghepChuSo(int n){
    int hangDonVi = 0;
    int hangChuc = 0;
    int count = 0;
    int nPhaKe = n;
    int result;
    do{
        nPhaKe = nPhaKe / 10;
        count++;
    }while(nPhaKe != 0);
    //1223
    hangChuc = n / pow(10, count-1);
    hangDonVi = n % 10;
    result = (hangChuc*10) + (hangDonVi);
    return result;
}
