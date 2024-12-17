#include <stdio.h>
#include <stdlib.h>
/*
Hàm nhận vào n ( số nguyên xịn ), return số fibonacci thứ n ( 4p )
Lưu ý
printf trước khi scanf phải in ra là “Nhap so n: ”
+ printf(“\nNhap so n: ”);
+ scanf(“%d”, &n);
kết quả in ra không cần ghi gì hết chỉ cần in ra số
+ printf(“\n%d, result ”);

*/

int main()
{
    int n;
    printf("\nNhap so n: ");
    scanf("%d", &n);
    int result = fib(n);
    printf("\n%d, result");

    return 0;
}
int fib(int n){
    int pre = 0;
    int curr = 1;
    int result = 1;
    for(int i = 1; i <=n - 1 ; i++){
        result = pre + curr;
        pre = curr;
        curr = result;
    }
    return result;
}
