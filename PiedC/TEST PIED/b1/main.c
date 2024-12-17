#include <stdio.h>
#include <stdlib.h>
int checkSoChinhPhuong(int n);

int main()
{
    int n;
    printf("\nNhap so di em: ");
    scanf("%d", &n);
    printf("%d", checkSoChinhPhuong(n));
    return 0;
}
int checkSoChinhPhuong(int n){
    int soChinhPhuong;
    soChinhPhuong = sqrt(n);
    if(soChinhPhuong == sqrt(n)){
        return 1;
    }else{
        return -1;
    }
}
