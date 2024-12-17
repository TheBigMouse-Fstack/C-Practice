#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, end;

    printf("\nNhap start di: ");
    scanf("%d", &start);

    printf("\nNhap end di: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
//in ra cac so chan trong doan
    for(int i = start; i <= end; i++){
        if(i % 2 == 0){
            printf("%5d", i);
        }
    }
//in ra tong cac so le trong doan
    int sumOdd = 0;
    for(int i = start; i <= end; i++){
        if(i % 2 != 0){
            sumOdd += i;
        }
    }
    printf("\nSumOdd = %d", sumOdd);
//dem xem co bao nhieu so trong doan
    int count = 0;
    for(int i = start; i <= end; i++){
        count += 1;
    }
    printf("\nCount: %d", count);
//dem xem co bao nhieu so chan trong doan
    int countEven = 0;
    for(int i = start; i <= end; i++){
        if(i % 2 == 0){
            countEven += 1;
        }
    }
    printf("\nCountEven: %d", countEven);
    return 0;
}
