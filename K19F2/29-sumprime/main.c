#include <stdio.h>
#include <stdlib.h>
int isprime(int n);
int main()
{
    int start , end;
    int sum = 0;
    int count = 0;
    printf("\nNhap start: ");
    scanf("%d" , &start);
    printf("\nNhap end: ");
    scanf("%d" , &end);
    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    for(int n = start ; n <= end ; n++){
        if(isprime(n)){
            printf("%5d", n);
            sum += n;
            count++;
        }
    }
    printf("\nTong la %d", sum);
    printf("\nco %d SNT", count);
    return 0;
}
int isprime(int n){
    for(int n = start ; n <= end ; n++){
        for(int i = 2 ; i<= n - 1; i++){
            if(n%i == 0){
                return 0;
            }
        }return n > 1;
}
