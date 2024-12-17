#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    printf("\nBa canh tam giac co do dai a, b, c lan luot la: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a < 0 || b < 0 || c < 0){
        printf("Nhap so nguyen duong di ban eh .-.");
    }else if(a + b > c && b + c > a && a + c > b){
        if(a == b || b == c || c == a){
            if(a == b && b == c){
                printf("Tam giac deu nha!");
            }else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
                printf("Tam giac vuong can nha!");
            }else{
                printf("Tam giac can nha!");
            }
        }else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
            printf("Tam giac vuong nha!");
        }else{
            printf("Tam giac thuong nha!");
        }
    }else{
        printf("Khong phai tam giac nha!");
    }
    return 0;
}
