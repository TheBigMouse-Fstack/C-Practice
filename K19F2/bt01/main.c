#include <stdio.h>
#include <stdlib.h>
/*
Viết chương trình nhập vào 3 cạnh, tìm xem 3 cạnh đó tạo thành tam giác gì ? ( 4p ) ( 0 có đầu ra 3 đầu vào )
+ 1 2 3 -> Không phải tam giác
+ 2 2 3 -> Tam giác cân
+ 3 4 5 -> Tam giác vuông
+ 2 2 2 -> Tam giác đều
+ 4 4 4 -> Tam giác vuông cân
Lưu ý
-	printf trước khi scanf phải in ra là “Nhap so a: ”
+ printf(“\nNhap so a: ”);
+ scanf(“%d”, &a);
Tương tự
+ printf(“\nNhap so b: ”);
+ printf(“\nNhap so c: ”);
-	kết quả in ra
+ printf(“\nKhong phai tam giac”);
+ printf(“\nTam giac can”);
+ printf(“\nTam giac thuong”);
+ printf(“\nTam giac vuong can”);
+ printf(“\nTam giac vuong”);
+ printf(“\nTam giac deu”);

*/
int main()
{
    int a,b,c;
    printf("\nNhap so a: ");
    scanf("%d", &a);
    printf("\nNhap so b: ");
    scanf("%d", &b);
    printf("\nNhap so c: ");
    scanf("%d", &c);
    traingle(a,b,c);
    return 0;
}
void traingle ( int a , int b , int c){
    if(a + b > c && a + c > b && b + c > a){
        if(a == b || a == c || b == c){
            if(a == b && a == c && b == c){
                printf("\nTam giac deu");
            }else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
                printf("\nTam giac vuong can");
            }else{
                printf("\nTam giac can");
            }
        }else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
                printf("\nTam giac vuong");
            }else{
                printf("\nTam giac thuong");
            }
    }else{
        printf("\nKhong phai la tam giac");
    }
}
