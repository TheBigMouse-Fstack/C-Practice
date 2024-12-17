#include <stdio.h>
#include <stdlib.h>
/*
1.Viết hàm nhận vào một số nguyên, trả ra 1 nếu là số nguyên tố và 0 nếu không phải

2.Nhập vào một số nguyên dương n, in ra số fibonacci thứ n trong dãy

3.Nhập vào start và end, in ra màn hình các số chẵn trong đoạn từ start đến end

4.Nhập vào n( kiểm tra số nguyên dương từ 0 trở lên, chặn nhập sai), tính n giai thừa

5.Nhập vào số nguyên dương n, tính trung bình cộng của các chữ số trong n

6.Viết hàm nhận vào một số thực, trả ra 1 nếu đảo ngược phần dư của nó là số nguyên tố, và 0 nếu k phải.
vd: 4.13 => 1
vd: 8.91 => 1
vd: 12.32=> 1
vd: 10.23 => 0
vd: 11.43 => 0
*/

//bai 1
/*
int prime(int n);
int main()
{
//nhap so nguyen
    int n;
    char a;
    do{
        printf("\nNhap n: ");
        scanf("%d", &n);
        scanf("%c", &a);
        fflush(stdin);
        if(n < 0 || a != 10){
            printf("Nhap lai");
        }
    }while(n < 0 || a != 10);
//goi
    int result = prime(n);
//in
    printf("%d", result);
    return 0;
}
int prime(int n){
    if(n>1){
        for(int i =2 ; i <= n - 1; i++){
            if(n%i == 0){
                    return 0;
            }
        }
        return 1;

    }
    return 0;
}
*/

//bai 2
/*
void fibonacci (int n);
main()
{
    int n;
    char a;
    do{
        printf("\nNhap n: ");
        scanf("%d", &n);
        scanf("%c", &a);
        if(a!=10 || n < 0){
            printf("Nhap lai");
        }
    }while(a!=10 || n < 0);
    fibonacci(n);
    return 0;
}
void fibonacci (int n){
    int prev = 0;
    int curr = 1;
    int result = 1;
    for ( int i = 1; i <= n - 1; i++){
        result = prev + curr;
        prev = curr;
        curr = result;
    }
    printf("\n%d o vi tri thu %d",result , n);
}
*/

//bai 3
/*
void even (int start , int end);
main()
{
    int start , end;
    printf("\nNhap start: ");
    scanf("%d", &start);
    printf("\nNhap end: ");
    scanf("%d", &end);

    even(start , end);

}
void even (int start , int end){
    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    for( int n = start ; n <= end ; n++){
        if(n % 2 == 0){
            printf("\n%d", n);
        }
    }
}
*/

//bai 4
/*
int giaithua(int n);
main()
{
    int n;
    char a;
    do{
        printf("\nNhap n: ");
        scanf("%d", &n);
        scanf("%c", &a);
        fflush (stdin);
        if(a!= 10 || n<0){
            printf("Nhap lai");
        }
    }while(a!= 10 || n < 0);
    int result = giaithua(n);
    printf("\nket qua la: %d", result);
    return 0;
}
int giaithua(int n){
    int mult = 1;
    for(int i = 1 ; i <= n ; i++){
        mult *= i;
    }
    return mult;
}
*/

//bai 5
float trungbinhcong ( int n);
main()
{
    int n;
    char a;
    do{
        printf("nNhap n: ");
        scanf("%d", &n);
        scanf("%c", &a);
        fflush(stdin);
        if(a!=10 || n < 0){
            printf("\nNhap lai");
        }
    }while(a!=10 || n < 0);
    float result = trungbinhcong(n);
    printf("%f", result);
    return 0;
}
float trungbinhcong ( int n){
    int sum = 0;
    int count = 0;
    while( n != 0){
    sum += n % 10;
    n = n / 10;
    count++;
}
    printf("%f", sum);
    printf("%d", count);
    float result = sum / count;
    return result;
}
