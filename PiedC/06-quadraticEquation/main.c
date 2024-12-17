#include <stdio.h>
#include <stdlib.h>
//06-quadraticEquation

/*
Người dùng nhập vào 3 số thực lần lượt là a b c
là hệ số của phương trình ax^2 + bx + c = 0
a^2 => a*a => pow(a, 2)
căn 2 của a => sqrt(a)
căn 5 của a => pow(a, 1/5)
*/
int main()
{

    float a, b, c;

    printf("\nNhap a: ");
    scanf("%f", &a);

    printf("\nNhap b: ");
    scanf("%f", &b);

    printf("\nNhap c: ");
    scanf("%f", &c);

    if(a == 0){//bx + c = 0
        if(b == 0){//c = 0
            if(c == 0){
                printf("\nPt vo so nghiem");
            }else{
                printf("\nPt vo nghiem");
            }
        }else{
            printf("\nPt 1 nghiem: %f", -c/b);
        }
    }else{//ax^2 + bx + c = 0
        float delta = b*b - 4*a*c;//tính delta

        if(delta == 0){
            printf("\nPt co nghiem kep ");
            printf("x1 = x2 = %f", -b/(2*a));
        }else if(delta > 0){
            printf("\nPt co hai nghiem phan biet ");
            printf("\nx1 = %f", (-b + sqrt(delta))/(2*a));
            printf("\nx2 = %f", (-b - sqrt(delta))/(2*a));
        }else{
            printf("\nPt vo nghiem");
        }
    }
/*
    float a;
    float b;
    float c;
    float x1;
    float x2;
    float x;

    printf("Nhap a di em: ");
    scanf("%f", &a);
    printf("Nhap b di em: ");
    scanf("%f", &b);
    printf("Nhap c di em: ");
    scanf("%f", &c);
    float delta = b*b - 4*a*c;
    if(a == 0 && b == 0){
        if(c == 0){
            printf("Phuong trinh vo so nghiem nha ");
        }else{
            printf("Phuong trinh vo nghiem nha iem ");
        }
    }else if{
    if(a != 0){
        if(a + b + c == 0){
            printf("\nPhuong trinh co hai nghiem x1 = 1 va x2 = %.2f", x2 = c/a);
        }else if(a - b + c == 0){
            printf("\nPhuong trinh co hai nghiem x1 = -1 va x2 = %.2f", x2 = -c/a);
        }else if(delta > 0){
            printf("\nPhuong trinh co hai nghiem phan biet x1 = %.2f và x2 = %.2f", x1 = ((-b + sqrt(delta))/(2*a), (-b + sqrt(delta))/(2*a)));
        }else if(delta == 0){
            printf("\nPhuong trinh co nghiem kep x = %.2f", x = (-b)/(2*a));
        }else{
            printf("\nDeoconghiemdauem...");
        }
        }else{
            printf("Phuong trinh co nghiem x = %.2f", x = -c/b);
        }
    }
    //xin người dùng a b c

    //tính delta

    //xét delta > < = 0
*/
    return 0;
}
