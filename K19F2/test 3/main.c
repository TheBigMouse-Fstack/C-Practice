#include <stdio.h>
#include <stdlib.h>
int sumnumber (int n);
int main()
{
    int n;
    char a;
    do{
        printf("\nNhap so nguyen duong: ");
        scanf("%d",&n);
        scanf("%c",&a);
        fflush(stdin);
        if(n <= 0 || a != 10){
            printf("\nNhap so nguyen duong lam on!!!");
        }
    }while(n <= 0 || a != 10);
    printf("\nKet qua la: %d",sumnumber(n));
    return 0;
}
int sumnumber (int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
