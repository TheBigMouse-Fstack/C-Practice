#include <stdio.h>
#include <stdlib.h>

int prime(void);
int main()
{
    int check = prime();
    check ? printf("\nSNT") : printf("\nKPSNT");
    return 0;
}
int prime(void){
    int n;
    printf("nnhap n: ");
    scanf("%d", &n);
    if(n>=2){
        for(int i = 2; i <= n - 1; i++){
            if(n%i == 0){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
