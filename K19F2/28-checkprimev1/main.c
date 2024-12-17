#include <stdio.h>
#include <stdlib.h>
void checkprime(void);
int main()
{
    checkprime();
    return 0;
}
void checkprime(void){
    int n;
    printf("\nNhap n: ");
    scanf("%d" , &n);

    if(n >= 2){
        int isprime = 1;
        for(int i = 2 ; i <= n - 1 ; i++){
            if(n % i == 0){
                isprime = 0;
            }
        }
    if(isprime == 1){
        printf("\n%d is prime",n);
    }else{
        printf("\n%d is ot prime",n);
    }
    }else{
        printf("\n%d is not prime",n);
    }
}
