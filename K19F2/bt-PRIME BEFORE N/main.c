#include <stdio.h>
#include <stdlib.h>

int main()
{
    int main()
{
    int a;
    printf("\nNhap a: ");
    scanf("%d", &a);
    for(int n = 0 ; n < a ; n++)
    if(n>=2){
        int prime = 1;
        for(int i = 2; i <= n - 1 ; i++){
            if(n%i == 0){
                prime = 0;
            }
        }
        if(prime == 1){
            if(n<a){
                printf("%3d",n);
            }

        }
    }

    return 0;
}
