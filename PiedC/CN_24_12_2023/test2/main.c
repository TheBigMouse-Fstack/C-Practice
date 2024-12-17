#include <stdio.h>
#include <stdlib.h>
//Viết 1 chương trình nhận vào số có 2 chữ số, nếu số đó là số nguyên tố và tổng 2 chữ số chia hết cho 2 thì kết thúc, còn không thì nhập lại đến chết ( 4p )
int main()
{
    int a;
    int tong = 0;
    int flag = 1;
    int isPrime = 1;
    do{
    printf("Nhap a di em: ");
    scanf("%d", &a);
    if(a >= 2){
        isPrime = 1;
        for(int i = 2; i <= a - 1; i++){
            if(a % i == 0){
                isPrime = 0;
                break;
            }
        }

        tong = (a / 10) + (a % 10);
        if(tong % 2 == 0){
            flag = 0;
        }

    }
    }while(flag != 0 && isPrime == 0);


    return 0;
}
