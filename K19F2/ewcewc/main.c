#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int array[100];
    int size = 0;
    int product = 1;
    while(1){
    printf("\nNhap n: ");
    scanf("%d",&n);
    if(n == 0){
        break;
    }else if(product > 1000){
        product /= n;
        break;
    }else{
        product *= n;
    }
    }
    printf("\n%d",product);
    return 0;
}
