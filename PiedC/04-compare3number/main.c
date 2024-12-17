#include <stdio.h>
#include <stdlib.h>
//04-compare3number
//nhập từ bàn phím 3 số nguyên
//lần lượt là a, b, c
//nhiệm vụ: xuất ra màn hình tên biết có giá trị lớn nhất

/*
    nhập a : 10
    nhập b : 20
    nhập c : 30

    a lớn nhất (a > b && a > c)
    b lớn nhất (b > c && b > a)
    c lớn nhất (c > a && c > b)
    a và b lớn nhất (a == b && a > c)
    b và c lớn nhất (b == c && b > a)
    a và c lớn nhất (a == c && a > b)
    a, b, c bằng nhau (a == b && b == c)
*/
int main()
{
    int a;
    int b;
    int c;
    printf("\nA cua ban la ");
    scanf("%d", &a);
    printf("\nB cua ban la ");
    scanf("%d", &b);
    printf("\nC cua ban la ");
    scanf("%d", &c);
    if(a > b && a > c){
        printf("a bang %d la so lon nhat", a);
    }else if(b > c && b > a){
        printf("b bang %d la so lon nhat", b);
    }else if(c > a && c > b){
        printf("c bang %d la so lon nhat", c);
    }else if(a == b && a > c){
        printf("a bang %d va b bang %d la hai so lon nhat", a, b);
    }else if(a == c && a > b){
        printf("a bang %d va c bang %d la hai so lon nhat", a, c);
    }else if(b == c && b > a){
        printf("b bang %d va c bang %d la hai so lon nhat", b, c);
    }else if(b == c && c == a){
        printf("a, b, c bang nhau");
    }
    return 0;
}


/*
05-triangleType
Nhập vào 3 số nguyên lần lượt là đại diện cho biến a, b, c
Kiểm tra xem 3 biến a, b, c có thể tạo thành 1 tam giác không
Nếu có thì là tam giác gì

cân, đều, vuông, vuông cân, thường
*/
