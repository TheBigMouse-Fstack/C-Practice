#include <stdio.h>
#include <stdlib.h>
// viết hàm nhận vào n, tính tổng các chữ số của n  viet = int      tinh = int
int sumnember (int n);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    int sum = sumnumber(n);
    printf("%d", sum);
    return 0;
}
int sumnumber (int n){
    int sum = 0;
    int a;
    while(n != 0){
        a = n % 10;
        n = n / 10;
        sum += a;
    }
    return sum;
}
