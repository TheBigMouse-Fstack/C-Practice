#include <stdio.h>
#include <stdlib.h>
void checkprime(int n);
int main()
{
    int n;
    printf("nNhap n: ");
    scanf("%d", &n);
    checkprime(n);
    return 0;
}
void checkprime(int n){
    if(n >= 2){
        for(int i = 2; i <= n - 1 ; i++){
            if(n%i == 0){
                printf("\n%d is not prime", n);
                return;
            }
        }
        printf("\n%d is prime", n);
    }else{
        printf("\n%d is not prime", n);
    }
}
