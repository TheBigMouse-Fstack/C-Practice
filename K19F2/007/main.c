#include <stdio.h>
#include <stdlib.h>
//- Nhập vào một số nguyên dương n, in ra số fibonacci thứ n trong dãy ( 3p )
int (fibonacci)(int n);
int main()
{
    int n;
    printf("\ninput n: ");
    scanf("%d", n);
    int result = fibonacci();
    printf("%d", result);
    return 0;
}
int (fibonacci)(int n){
    int prev = 0;
    int curr = 1;
    int result = 1;
    for(int i = 1 ; i <= n - 1; i++){
        result = prev + curr;
        prev = curr;
        curr = result;
    }
    return result;
}
