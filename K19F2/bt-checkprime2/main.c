#include <stdio.h>
#include <stdlib.h>

void prime(int n);
int main()
{
    int n;
    printf("\nnHap n: ");
    scanf("%d", &n);
    prime(n);
    return 0;
}
void prime(int n){
    if(n>=2){
        int prime = 1;
        for(int i = 2 ; i <= n - 1 ; i++){
            if(n%i == 0){
                prime = 0;
            }
        }
        if(prime == 1){
            printf("\nSNT");
        }else{
            printf("\nKPSNT");
        }
    }else{
        printf("\nKPSNT");
    }
}
