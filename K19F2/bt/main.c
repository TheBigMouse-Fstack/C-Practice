#include <stdio.h>
#include <stdlib.h>

///Bài 1: Nhập vào tháng của 1 năm. Cho biết tháng thuộc quý mấy trong năm



void quy(int n);
int main()
{
    int n;
    printf("\nnhap thang: ");
    scanf("%d", &n);
    quy(n);
    return 0;
}
void quy(int n){
    if(n == 1 || n == 2 || n == 3){
        printf("\nQuy 1");
    }else if(n == 4 || n == 5 || n == 6){
        printf("\nQuy 2");
    }else{
        printf("\nQuy 3");
    }

}

