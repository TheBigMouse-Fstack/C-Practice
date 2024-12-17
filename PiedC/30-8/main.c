#include <stdio.h>
#include <stdlib.h>
/*
8.hàm nhận vào start và end
  tính trung bình nhân của các số từ start đến end
*/
float geometric(int start, int end);
int main()
{
    printf("\nKet qua: %f ", geometric(1, 2));

    return 0;
}
float geometric(int start, int end){
    int mul = 1;
    int count = 0;
    for(int i = start; i <= end; i++){
        mul *= i;
        count++;
    }
    return pow(mul, (float)1/count);
}
