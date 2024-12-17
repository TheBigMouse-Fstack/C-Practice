#include <stdio.h>
#include <stdlib.h>
/*
fibo
in số chẵn start end
in snt start end
nhập giây đổi giờ p s
chữ thường thành in hoa
tổng các số có tổng chữ số là chẵn trong mảng
*/
int fibo(int n);

int main()
{
    printf("%d", fibo(5));
    return 0;
}

int fibo(int n){
    if(n == 1 || n == 2) return 1;
    return fibo(n-1) + fibo(n-2);
}
