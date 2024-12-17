#include <stdio.h>
#include <stdlib.h>
//4.Nhập vào n( kiểm tra số nguyên dương từ 0 trở lên, chặn nhập sai), tính n giai thừa
int giaithua(int n);
int main()
{
    int n;
    char buffer;
    do{
        printf("\nNhap vao n di: ");
        scanf("%d", &n);
        scanf("%ch", &buffer);
        fflush(stdin);
        if(buffer != 10 || n < 0){
            printf("\nNhap lai di em!");
        }
    }while(buffer != 10 || n < 0);
    printf("\nKet qua la: %d", giaithua(n));
    return 0;
}
int giaithua(int n){
    int a = 1;
    for(int i = 1; i <= n; i++){
        a *= i;
    }
    return a;
}
