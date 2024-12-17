#include <stdio.h>
#include <stdlib.h>
/*
Viết hàm nhận vào n, tính tổng các chữ số của n ( 4p ) ( có ra có vào )
Lưu ý
-	printf trước khi scanf phải in ra là “Nhap so n: ”
+ printf(“\nNhap so n: ”);
+ scanf(“%d”, &n);
-	kết quả in ra không cần ghi gì hết chỉ cần in ra số
+ printf(“\n%d”, result);

*/
int main()
{
    int n;
    printf("\nNhap so n: ");
    scanf("%d", &n);
    sum(n);
    return 0;
}
void sum(int n){
    int sum = 0;
    while(n != 0){
        int a = n % 10;
        n = n/10;
        sum +=a;
    }
    printf("\n%d", sum);
}
