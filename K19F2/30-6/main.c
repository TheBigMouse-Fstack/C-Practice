#include <stdio.h>
#include <stdlib.h>

int sumeven(int n);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    int sum = sumeven(n);
    printf("\n%d",sum);
    return 0;
}
int sumeven(int n){
    int sumeven = 0;
    for(int i = 1; i <= n ; i++){
        if(i % 2 == 0){
            sumeven+= i;
        }
    }
    return sumeven;
}
