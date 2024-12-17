#include <stdio.h>
#include <stdlib.h>
//- Viết hàm nhận vào một số nguyên, trả ra 1 nếu là số nguyên tố và 0 nếu không phải ( 3p )

int (checkprime)(int n);
int main()
{
    int n;
    printf("\ninput n: ");
    scanf("%d", &n);
    int result = checkprime(n);
    printf("%d", result);
    return 0;
}
int (checkprime)(int n){
    if(n>1){
        for(int i = 2 ; i <= n - 1; i++){
            if(n%i == 0){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
