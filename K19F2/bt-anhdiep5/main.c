#include <stdio.h>
#include <stdlib.h>
//hàm nhận vào n, return số fibonacci thứ n
void fibonacci ( int n);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}
void fibonacci (int n){
    int pre = 0;
    int curr = 1;
    int result = 1;
    for ( int i = 1 ; i <= n - 1 ; i++){
        result = pre + curr;
        pre = curr;
        curr = result;
    }
    printf("\n%d o vi tri thu %d", result , n);
}
