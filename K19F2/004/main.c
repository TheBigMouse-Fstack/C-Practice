#include <stdio.h>
#include <stdlib.h>
//- Tính tổng các phần tử là số nguyên tố trong mảng ( 6p )

int sumprime (int n);
int main()
{
    int n;
    printf("\ninput n: ");
    scanf("%d", &n);
    int result = sumprime(n);
    printf("\n%d", result);
    return 0;
}
int sumprime (int n){
    int sum = 0;
    int isprime = 1;
    while(n > 0){
        int a = n % 10;
        n = n /10;
        if(a > 1){
            isprime = 1;
            for(int i = 2; i <= a - 1; i++){
                if(a%i == 0){
                    isprime = 0;
                }
            }if(isprime == 1){
                sum += a;
            }
        }
    }
    return sum;
}

