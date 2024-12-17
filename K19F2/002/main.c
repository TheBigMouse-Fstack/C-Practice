#include <stdio.h>
#include <stdlib.h>
//- Viết hàm tính tổng các phần từ có giá trị là chẵn trong mảng ( 6p )

int sumeven (int n);
int main()
{
    int n;
    printf("\ninput n: ");
    scanf("%d", &n);
    int result = sumeven(n);
    printf("%d", result);
    return 0;
}
int sumeven (int n){
    int sum = 0;
    while(n>0){
        int a = n % 10;
        n = n/10;
        if( a % 2 == 0){
            sum += a;
        }
    }
    return sum;
}
