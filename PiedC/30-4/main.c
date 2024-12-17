#include <stdio.h>
#include <stdlib.h>
//4.viết hàm nhận vào n, tính n giai thừa
int factorial(int n);
int factorialV2(int n);
int main()
{
    int n;
    printf("\nNhap n di em: ");
    scanf("%d", &n);
    printf("\nKet qua cua em la: %d", factorialV2(n));
    return 0;
}
int factorial(int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}
int factorialV2(int n){
    if(n == 1 || n == 0) return 1;
    return n * factorialV2(n - 1);
}

