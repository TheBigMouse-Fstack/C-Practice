#include <stdio.h>
#include <stdlib.h>
/* viết hàm nhận vào start và end
tính tổng các phần tử trong đoạn
dùng hàm có kết quả in ra màn hình*/
int sumAll ( int start , int end);
int main()
{
    int start , end;
    printf("\nnhap start: ");
    scanf("%d", &start);
    printf("\nNhap end: ");
    scanf("%d", &end);

    int sum = sumAll(start,end);

    printf("\ntong la %d", sum);
    return 0;
}
int sumAll ( int start , int end){
    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    int sum = 0;
    for( int i = start ; i <= end; i++){
        sum += i;
    }
    return sum;
}
