#include <stdio.h>
#include <stdlib.h>
/*
7.viết hàm xin người dùng n,
  in ra màn hình các số lẽ trong khoảng từ 1 đến n
*/
void printOdd(void);
int main()
{
    printOdd();
    return 0;
}
void printOdd(void){
    int n;
    printf("\nNhap n di em oi: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            printf("%5d", i);
        }
    }
}
