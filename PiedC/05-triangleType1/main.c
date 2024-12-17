#include <stdio.h>
#include <stdlib.h>
//05-triangleType
/*
Nhập vào 3 biến số nguyên lần lượt là a, b, c
Kiểm tra xem a, b, c có tạo thành tam giác không
Nếu có thì là tam giác gì?
*/

int main()
{
    int a, b, c;

    printf("\nNhap a: ");
    scanf("%d", &a);

    printf("\nNhap b: ");
    scanf("%d", &b);

    printf("\nNhap c: ");
    scanf("%d", &c);

    //nếu code chạy xuống đây thì a, b, c đã có giá trị
    //muốn kiểm tra a b c có tạo thành tam giác không

    if(a + b > c && b + c > a && a + c > b){//la tam giac
        if(a == b || b == c || c == a){//2 canh bang nhau
            if(a == b && b == c){
                printf("\nTam giac deu");
            }else if(a*a + b*b == c*c||
                     b*b + c*c == a*a||
                     a*a + c*c == b*b){
                printf("\nTam giac vuong can");
            }else{
                printf("\nTam giac can");
            }
        }else if(a*a + b*b == c*c||
                 b*b + c*c == a*a||
                 a*a + c*c == b*b){//có góc vuông
            printf("\nTam giac vuong");
        }else{
            printf("\nTam giac thuong");
        }
    }else{
        printf("\nKhong la tam giac");
    }
    printf("%.2f", (5:2));
    return 0;
}

