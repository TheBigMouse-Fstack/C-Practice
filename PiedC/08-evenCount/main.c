#include <stdio.h>
#include <stdlib.h>
//08-evenCount
/*
Nhập vào 2 số nguyên lần lượt là start và end
In ra màn hình các số trong đoạn từ start đến end
- mô tả:
    Nhập start: -2
    Nhập end: 6
    -2 -1 0 1 2 3 4 5 6
*/
int main()
{
    int start;
    int end;
    printf("Nhap vo di ");
    scanf("%d", &start);
    scanf("%d", &end);
    if(start < end){
         for(int i = start; i <= end ; i++){
        printf("%d ", i);
    }
    }else if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
        for(int i = start; i <= end ; i++){
        printf("%d ", i);
    }
    }
    int sum = 0;
    for(int i = start; i <= end ; i++){
        sum += i;
    }
    printf("\nTong = %d", sum);
    //đổi vế lại mới đúng
    return 0;
}
// tính tổng các số trong đoạn từ start -> end
/*
Tạo project 08-workEvenCount
In ra màn hình các số chẵn trong đoạn
tính tổng các số lẽ trong đoạn
đếm xem có bao nhiêu số trong đoạn
đếm xem có bao nhiêu số chẵn trong đoạn
*/
