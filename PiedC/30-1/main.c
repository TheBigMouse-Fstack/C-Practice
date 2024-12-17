#include <stdio.h>
#include <stdlib.h>
int sumStartEnd(int start, int end);
int main()
{
    int start, end;
    printf("\nNhap start: ");
    scanf("%d", &start);
    printf("\nNhap end: ");
    scanf("%d", &end);
    printf("\nTong la: %d", sumStartEnd(start, end));
    return 0;
}
int sumStartEnd(int start, int end){
    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    int sum = 0;
    for(int i = start; i <= end; i++){
        sum += i;
    }
    return sum;
}
