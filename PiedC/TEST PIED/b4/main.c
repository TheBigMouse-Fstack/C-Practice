#include <stdio.h>
#include <stdlib.h>
int fibonacii(int n);
int checkInteger(int n);
int main()
{
    int n;
    char ch;

    printf("\nNhap n di em: ");
    scanf("%d", &n);

    printf("\nKet qua ne: %d", checkInteger(n));
    return 0;
}
int checkInteger(int n){
    if(n <= 0){
        return -1;
    }else{
        return fibonacii(n);
    }
}
int fibonacii(int n){
    if(n == 1 || n == 2) return 1;
    return fibonacii(n - 1) + fibonacii(n - 2);
}
