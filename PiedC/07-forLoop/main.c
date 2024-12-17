#include <stdio.h>
#include <stdlib.h>
//07-forLoop: vòng lặp for
//repeat là reuse có thời gian các khoảng cách bằng nhau
//reuse là hàm
//repeat là vòng lặp
int main()
{
    /*
    for(Khởi đầu; điều kiện thoát(còn thỏa thì còn làm); bước nhảy){
        command block;
    }
    */
    //int i;
    //printf("\ni = %d", i);
    for(int i = 1; i <= 10; i++){
        printf("\n%d Nguyen The Hoang", i);
    }//blockScope: tầm nhìn của một khối


    return 0;
}
