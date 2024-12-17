#include <stdio.h>
#include <stdlib.h>

void  prime (void);
int main()
{
    prime();
    return 0;
}
void prime ( void){
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    if(n>=2){
        int prime = 1;
        for(int i = 2; i<= n - 1 ; i++){
            if(n%i == 0){
                prime = 0;
            }
        }
        if(prime == 1){
            printf("\nSNT");
        }else{
            printf("nKPSNT");
        }
    }else{
        printf("\nKPSNT");
    }
}
