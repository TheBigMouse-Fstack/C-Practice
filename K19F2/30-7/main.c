#include <stdio.h>
#include <stdlib.h>

void odd (void);
int main()
{
    odd();
    return 0;
}
void odd (void){
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n ; i++){
            if( i % 2 == 0 || printf("%3d", i));
    }
}
