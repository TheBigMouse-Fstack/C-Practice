#include <stdio.h>
#include <stdlib.h>
//Bài 5: Tìm chữ số lớn nhất của số nguyên dương n
/*

2.

3.v

4.

5.

6.viết hàm nhận vào n, tính tổng các số chẳn từ 1 đến n

7.viết hàm xin người dùng n,
  in ra màn hình các số lẽ trong khoảng từ 1 đến n
8.hàm nhận vào start và end
  tính trung bình nhân của các số từ start đến end
  */
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    while(n != 0){
        int a = n & 10;
        n = n / 10;

    }
    return 0;
}
