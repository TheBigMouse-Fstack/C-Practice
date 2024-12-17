#include <stdio.h>
#include <stdlib.h>
// viết hàm nhận vào n, tính n giai thừa
void giaithua (int n);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    giaithua(n);
    return 0;
}
void giaithua (int n){
    int mult = 1;
    for(int i = 1 ; i <= n; i++){
        mult *= i;
    }
    printf("%d", mult);
}
