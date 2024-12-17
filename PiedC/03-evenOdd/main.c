#include <stdio.h>
#include <stdlib.h>
//03-evenOdd
//xin người dùng nhập từ bàn phím một số nguyên bất kỳ
//kiểm tra xem số nguyên đó là chẳn hay lẻ
//in ra màn hình báo cáo
int main()
{
    int number;
    printf("\nPlz, input a number: ");
    scanf("%d", &number);
    //test thử đã nhận được chưa
    //printf("\nNumber ne %d", number);
    //nếu code xuống được đây nghĩa là trong number đã có giá trị rồi
    //kiểm tra xem giá trị của number là chẵn hay lẻ
    if(number % 2 == 0){
        printf("\n%d is even.", number);
    }else{
        printf("\n%d is odd.", number);
    }
    return 0;
}
