#include <stdio.h>
#include <stdlib.h>
int checkprime ( void);
int main()
{
    int check = checkprime();
    check ? printf("\n is prime") : printf("\n is not prime");
    return 0;
}
int checkprime ( void){
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);

    if(n>=2){
        for(int i = 2 ; i <= n - 1; i++){
            if(n%i == 0){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
