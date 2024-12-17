
#include <stdio.h>
#include <stdlib.h>
/*
Hàm nhận vào n ( số nguyên xịn ), kiểm tra n có phải là số nguyên tố hay không ( 4p )
Lưu ý
printf trước khi scanf phải in ra là “Nhap so n: ”
+ printf(“\nNhap so n: ”);
+ scanf(“%d”, &n);
kết quả in ra theo form
+ printf(“\nLa so nguyen to”);
+ printf(“\nKhong phai so nguyen to”);
*/
void prime ( int n);
int main()
{
    int n;
    printf("\nNhap so n: ");
    scanf("%d", &n);
    prime(n);
    return 0;
}
void prime ( int n){
    if(n>1){
        for(int i = 1; i <= n - 1; i++){
            if(n%i == 0){
                printf("\nKhong phai so nguyen to");
                return ;
            }else{
                printf("\nLa so nguyen to");
            }
        }
    }else{
        printf("\nKhong phai so nguyen to");
    }

}
