#include <stdio.h>
#include <stdlib.h>
/*
Nhập vào 1 khoảng Start và End, Đếm số lượng số nguyên tố, số chính phương, số chẵn, số lẽ có trong khoảng ( 8p )  ( 0 ra 0 vào )
o	Start 8, end 2
o	Start 1 end 10
o	Số nguyên tố: 4 (2, 3, 5, 7)
o	Số chính phương: 3 (1, 4, 9)
o	Số chẵn: 5 (2, 4, 6, 8, 10)
o	Số lẻ: 5 (1, 3, 5, 7, 9)
Lưu ý
-	printf trước khi scanf phải in ra là “Nhap start: ”
+ printf(“\nNhap start: ”);
+ scanf(“%d”, & start);
Tương tự end
+ printf(“\nNhap end: ”);
-	kết quả in ra
+ printf(“\n%d-%d-%d-%d”, So nguyen to, So chinh phuong, So chan, So le);

*/
int main()
{
    sum();
    return 0;
}
void sum (void){
    int start , end;
    int count = 0;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    printf("\nNhap start: ");
    scanf("%d", &start);
    printf("\nNhap end: ");
    scanf("%d", &end);
    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    for(int n = start ; n <= end ; n++){
        if(n >1){
            int isprime = 1;
            for(int i = 2 ; i <= n - 1 ; i++){
                if(n % i == 0){
                    isprime = 0;
                }
            }
            if(isprime == 1){
                count++;
            }

        }
        if(n % 2 == 0){
            count1++;
        }else{
            count2++;
        }
        if(sqrt(n) == (int)sqrt(n) ){
            count3++;
        }
    }
    printf("\n%d , %d , %d , %d",count , count3, count1, count2);
}
