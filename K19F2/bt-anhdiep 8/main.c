#include <stdio.h>
#include <stdlib.h>
/*
hàm nhận vào start và end
  tính trung bình nhân của các số từ start đến end
*/
int averagemultiplication( int start , int end);
int main()
{
    int start , end;
    printf("nNhap start: ");
    scanf("%d", &start);
    printf("nNhap end: ");
    scanf("%d", &end);
    float aver = averagemultiplication(start , end);
    printf("\nTrung binh nhan la: %f", aver);
    return 0;
}
int averagemultiplication ( int start , int end){
    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    int mult = 1;
    float aver;
    int count = 0;
    for(int i = start ; i <= end ; i++){
        mult *= i;
        count++;
    }
    aver = pow(mult,1.0/count);
    return aver;
}
