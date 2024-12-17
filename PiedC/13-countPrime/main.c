#include <stdio.h>
#include <stdlib.h>
//13-countPrime
//nhap vao start va end
//in ra man hinh cac so Prime trong doan
//0798362204 số má anh Điệp:))
int main()
{
    int start, end;
    printf("\nNhap start vao di: ");
    scanf("%d", &start);

    printf("\nNhap end vao di: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    for(int number = start; number <= end; number++){
        int isPrime = 1;// reset niềm tin trước mỗi number mới
        if(number >= 2){
            for(int i = 2; i <= number - 1; i++){
                if(number % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                printf("%5d", number);
           }
        }
    }

    return 0;
}
