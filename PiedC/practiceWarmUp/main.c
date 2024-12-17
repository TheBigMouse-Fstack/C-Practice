#include <stdio.h>
#include <stdlib.h>
//viết hàm xóa toàn bộ mảng con trong mảng cha, nếu có thì phải xóa đến khi không còn
int isPrime(int number);

int main()
{
    int result = isPrime(-1);
    printf("Res ne %d", result);
    return 0;
}

int isPrime(int number){
    for(int i = 2; i <= number - 1; i++){
        if(number % i == 0) return 0;
    }
    return number >= 2;
}
