#include <stdio.h>
#include <stdlib.h>
//3.Nhập vào start và end, in ra màn hình các số chẵn trong đoạn từ start đến end
void printEven(int start, int end);
int main()
{
    int start, end;
    printf("\nNhap start: ");
    scanf("%d", &start);
    printf("\nNhap end: ");
    scanf("%d", &end);
    printEven(start, end);
    return 0;
}
void printEven(int start, int end){
    for(int i = start; i <= end; i++){
        if(i % 2 == 0){
            printf("%5d", i);
        }
    }
}
