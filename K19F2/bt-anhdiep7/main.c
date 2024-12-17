#include <stdio.h>
#include <stdlib.h>
/*viết hàm xin người dùng n,
  in ra màn hình các số lẽ trong khoảng từ 1 đến n*/
void odd (void);
int main()
{
    odd();
    return 0;
}
void odd (void){
    int n;
    printf("nNhap n: ");
    scanf("%d", &n);
    for(int i = 1 ; i <= n; i++){
            if(i % 2 != 0){
                printf("%3d",i);
            }
    }
}
