#include <stdio.h>
#include <stdlib.h>
/*
viết hàm nhận vào n, tính tổng các số chẳn từ 1 đến n
*/
int sumeven (int n);
int main()
{
    int n;
    printf("nNhap n: ");
    scanf("%d", &n);
    int sum = sumeven(n);
    printf("\nTong so chan la: %d", sum);
    return 0;
}
int sumeven (int n){
    int sum = 0;
    for(int i = 1 ; i <= n ; i++){
        if(i%2 == 0){
            sum += i;
        }
    }
  return sum;
}
