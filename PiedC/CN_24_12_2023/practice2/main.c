#include <stdio.h>
#include <stdlib.h>
//2.Nhập vào một số nguyên dương n, in ra số fibonacci thứ n trong dãy
int Fibonacci(int n);
int main()
{
    int n;
    printf("\nNhap so nguyen duong n di em: ");
    scanf("%d", &n);
    printf("\nKet qua la: %d", Fibonacci(n));
    return 0;
}
int Fibonacci(int n){
    if(n == 1 || n == 2) return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
