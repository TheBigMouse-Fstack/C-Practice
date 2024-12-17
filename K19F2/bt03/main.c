#include <stdio.h>
#include <stdlib.h>
/*
Nhập vào 1 số nguyên n . In ra màn hình số ở vị trí thứ n trong dãy Fibonanci ( 4p ) ( có ra có vào )
+ 1 -> 1
+ 5 -> 5
+ 7 -> 13
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
    int result = Fibonanci(n);
    printf("%d",result);
    return 0;
}
int Fibonanci (int n){

    int pre = 0;
    int curr = 1;
    int result = 1;

    for(int i = 1; i <= n - 1 ; i++){
        result = pre + curr;
        pre = curr;
        curr = result;
    }
    return result;

}
