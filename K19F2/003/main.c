#include <stdio.h>
#include <stdlib.h>
//- Viết hàm tính tổng các phần tử có vị trí là chẵn trong mảng ( 6p )

int sumeven2 (int n);
int main()
{
    int n;
    printf("\ninput n: ");
    scanf("%d", &n);
    int result = sumeven2(n);
    printf("\n%d", result);
    return 0;
}
int sumeven2 (int n){
    int count = 0;
    int sum = 0;
    while(n > 0){
        int a = n % 10;
        n = n / 10;
        count++;
        if( count % 2 == 0){
            sum += a;
        }
    }
    return sum;
}
