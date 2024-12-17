#include <stdio.h>
#include <stdlib.h>
int fibonacci (int n);
int fibonacciV2 (int n);
int main()
{
    int n;
    printf("\nnhap n: ");
    scanf("%d", &n);
    int result = fibonacciV2(n);
    printf("\n%d" ,&n);
    return 0;
}
int fibonacci ( int n){
    int result = 1;
    int curr = 1;
    int prev = 0;
    for(int i  = 1; i<= n - 1 ; i++){
        result = prev + curr;
        prev = curr;
        curr = result;
    }
    return result;
}
int fibonacciV2 (int n){
    if(n == 1 || n == 2) return 1;
    return fibonacciV2(n - 1) + fibonacciV2(n - 2);
}
