#include <stdio.h>
#include <stdlib.h>
/*

Tìm giá trị của dãy số 1 + 2 – 3 – 4 + 5 + 6 – 7 – 8 +9 + 10 -….. – ( n – 2 ) – ( n – 1 ) + n + ( n + 1 ) ( 6p ) ( 0 ra có vào )
o	n = 7, sum = 0
o	n = 5, sum = 1

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
void sum (int n){
    int count = 0;
    int sum = 0;
    for(int i = 1; i <= n ; i++){
        count++;
        if(count <= 2 ){
            sum += i;
        }else if(count == 3){
            sum -= i;
        }else if(count == 4){
            sum -= i;
            count = 0;
        }
    }printf("%d",sum);
}
