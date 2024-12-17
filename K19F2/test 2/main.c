#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start ,end;
    printf("\nNhap start: ");
    scanf("%d",&start);
    printf("\nNhap end: ");
    scanf("%d",&end);
    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    printf("\ncac so nguyen to la:");
    for (int number = start ; number <= end ; number++){
        if(number > 1){
            int isprime = 1;
            for(int i = 2 ; i<= number - 1;i++){
                if(number%i == 0){
                    isprime = 0;
                }
            }
        if(isprime == 1){
            printf("%4d",number);
        }
        }
    }
    return 0;
}
