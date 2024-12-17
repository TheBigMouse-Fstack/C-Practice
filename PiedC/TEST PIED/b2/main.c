#include <stdio.h>
#include <stdlib.h>
int sumElement(int n);
int main()
{
    int n;
    printf("\nNhap n vo di: ");
    scanf("%d", &n);
    printf("\nKet qua ne: %d", sumElement(n));
    return 0;
}
int sumElement(int n){
    int sum = 0;
    do{
        sum += n % 10;
        n = n / 10;
    }while(n != 0);
    return sum;
}
