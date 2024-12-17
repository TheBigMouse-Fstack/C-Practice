#include <stdio.h>
#include <stdlib.h>
//5.hàm nhận vào n, return số fibonacci thứ n
int Fibonacci(int n);
int FibonacciV2(int n);
int main()
{
    printf("\nKet qua: %d", FibonacciV2(2));
    return 0;
}
int FibonacciV2(int n){
    if(n == 1 || n == 2) return 1;
    return FibonacciV2(n - 1) + FibonacciV2(n - 2);
}

int Fibonacci(int n){
    int res = 1;
    int curr = 1;
    int prev = 0;
    for(int i = 1; i <= n - 1; i++){
        res = prev + curr;
        prev = curr;
        curr = res;
    }
    return res;
}
