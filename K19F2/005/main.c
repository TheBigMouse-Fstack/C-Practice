#include <stdio.h>
#include <stdlib.h>
//- Tìm số lớn nhất trong mảng ( 6p )

void findlargestn(void);
int main()
{
    findlargestn();
    return 0;
}
void findlargestn(void){
    int n;
    printf("\ninput n: ");
    scanf("%d", &n);
    int a , b  ,c = 0;
    while(n > 0){
        a = n % 10;
        n = n/10;
        b = n % 10;
        n = n/10;
        if(b > a && c < a && c < b){
            c = b;
        }else if( a == b && c < a){
            c = a;
        }else if(a > b && c < a && c < b){
            c = a;
        }
    }
    printf("%d", c);
}
