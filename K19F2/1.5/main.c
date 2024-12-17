#include <stdio.h>
#include <stdlib.h>

//Viết hàm nhận vào 3 số. Kiểm tra 3 số đó tạo thành tam giác gì ( 4p )
void checktriangle ( int a , int b , int c);
int main()
{
    int a , b , c;
    printf("\Nhap a: ");
    scanf("%d", &a);
    printf("\Nhap b: ");
    scanf("%d", &b);
    printf("\Nhap c: ");
    scanf("%d", &c);
    checktriangle(a,b,c);
    return 0;
}
void checktriangle ( int a , int b , int c){
   if(a + b > c && b + c > a && c + a > b){
        if(a == b || b == c || c == a){
            if(a == b && b == c){
                printf("\nLa tamgiac deu");
            }else if(a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b){
                printf("\nLa tam giac vuong can");
            }else{
                printf("\nTam giac can");
            }
        }else if(a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b){
            printf("\nLa tam giac vuong");
        }else{
            printf("\nLa tam giac thuong");
        }
    }else{
        printf("\nKhong la tam giac");
    }
    return 0;
}
