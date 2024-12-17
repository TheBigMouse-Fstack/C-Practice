#include <stdio.h>
#include <stdlib.h>
int reverse ( int n);
int main()
{
    int n;
    printf("\nNhap n:  ");
    scanf("%d",&n);
    printf("\nSo bi dao nguoc la: %d ", reverse(n));
    return 0;
}
int reverse ( int n){
    int tmp = n;
    n = 0;
    while(tmp > 0){
        int a = tmp % 10;
        tmp = tmp / 10;
        n = n * 10 + a;
    }
    return n;
}
