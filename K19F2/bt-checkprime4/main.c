#include <stdio.h>
#include <stdlib.h>

int prime(int n);
int main()
{
    int n;
    printf("\nnhap n: ");
    scanf("%d", &n);
    int check = prime(n);
    check ? printf("\nSNT") : printf("\nKPSNT");
    return 0;
}
int prime (int n){
    if(n>=2){
        for(int i = 2; i<=n-1; i++){
            return 0;
        }
         return 1;
    }
    return 0;

}
