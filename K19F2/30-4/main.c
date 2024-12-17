#include <stdio.h>
#include <stdlib.h>

int fatorial(int n);
int fatorialV2 (int n);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    int result = fatorialV2(n);
    printf("\ngia thua la %d", result);
    return 0;
}
int fatorial (int n){
    int result = 1;
    for(int i = 1 ; i<= n; i++){
        result *= i;
    }
    return result;
}
int faorialV2 (int n){
    if(n == 1 || n == 0) return 1;
    return n * fatorialV2(n-1);
}
