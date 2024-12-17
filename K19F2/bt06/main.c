#include <stdio.h>
#include <stdlib.h>
/*
Viết chương trình nhận vào 1 số nguyên, tính tổng, tích các thành phần và in ra số đó dưới dạng đảo ngược ( 4p ) ( 0 ra có vào )

-	printf trước khi scanf phải in ra là “Nhap so n: ”
+ printf(“\nNhap so n: ”);
+ scanf(“%d”, &n);
-	kết quả in ra không cần ghi gì hết chỉ cần in ra số
+ printf(“\n%d-%d-%d”, tong, tich, reverse);


*/
int main()
{
    int n;
    printf("\nNhap so n: ");
    scanf("%d", &n);
    number(n);
    return 0;
}
void number (int n){
    int rev = 0;
    int tmp = n;
    int sum = 0;
    int mult = 1;
    while(n != 0){
        sum += n % 10;
        mult *= n % 10;
        n = n / 10;
    }
    while(tmp > 0){
        int a = tmp % 10;
        tmp = tmp / 10;
        rev = rev * 10 + a;
    }

    printf("\n%d-%d-%d",sum,mult,rev);
}
