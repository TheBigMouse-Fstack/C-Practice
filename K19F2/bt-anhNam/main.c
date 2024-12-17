#include <stdio.h>
#include <stdlib.h>
/*
Bài 1: Viết chương trình in bảng cửu chương ra màn hình


*/
/*
void multiplicationtable (void);
int main()
{
    multiplicationtable();
    return 0;
}
void multiplicationtable (void){
    for( int n = 1 ; n <= 9 ; n++){
        for( int i = 1; i <= 10 ; i++){
                int mult = n;
                mult *= i;
            printf("\n%d*%d = %d",n,i,mult);
        }
    }
    return 0;
}
*/
/*
Bài 2: Tính S(x, n) = x – x^2 + x^3 + … + (-1)^n+1 * x^n
*/
/*
int main()
{
    int x ;
    int sum = 0;
    printf("\nNhap x: ");
    scanf("%d", &x);
    for(int n = 1 ; n <= x ; n++){
        sum += pow(-1,n+1)*pow(x,n);
    }
    printf("\nS = %d", sum);
    return 0;
}
*/
/*Bài 3: hàm nhận vào n, return số fibonacci thứ n*/
/*
void fibonacci( int n);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    fibonacci(n);
}
void fibonacci( int n){
    int pre = 0;
    int curr = 1;
    int result = 1;
    for( int i = 1 ; i <= n - 1 ; i++){
        result = pre + curr;
        pre = curr;
        curr = result;
    }
    printf("\n%d la o vi tri thu %d", result, n);
    return 0;
}
*/
/*Bài 4: viết hàm nhận vào n, tính tổng các số chẳn từ 1 đến n*/
/*
void even (int n);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    even(n);
}
void even (int n){
    int sum = 0;
    for(int i = 1; i <= n ; i++){
        if( i % 2 == 0){
            sum += i;
        }
    }
    printf("\nTong la: %d",sum);
    return 0;
}
/*
/*
Bai 5: Lập chương trình giải hệ: ax + by = c, Dx + ey = f.
 Các hệ số nhập từ bàn phím*/
 int main()
 {
    float a , b , D , e , c , f;
    printf("\nNhap so a: ");
    scanf("%f" , &a);
    printf("\nNhap so b: ");
    scanf("%f" , &b);
    printf("\nNhap so D: ");
    scanf("%f", &D);
    printf("\nNhap so e: ");
    scanf("%f", &e);
    printf("\nNhap so c: ");
    scanf("%f", &c);
    printf("\nNhap so f: ");
    scanf("%f", &f);
    float x;
    float y;
    y = (a * f - D * c)/(-D*b+a*e);
    x = (c - b*y)/a;
    printf("\na la:%f", a);
    printf("\nb la:%f", b);
     return 0;
 }
