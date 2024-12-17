#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, end;
    printf("\nNhap start: ");
    scanf("%d", &start);
    printf("\nNhap end: ");
    scanf("%d", &end);

    int tmp;
    if(start > end){
        tmp = start;
        start = end;
        end = tmp;
    }
    int tongPrime
    for(int number = start; number <= end; number++){
        if(number >= 2){
            for(int i = 2; i = number - 1; i++){
                if(number % i != 0){
                    tongPrime += number;
                    break;
                }
            }
        }
    }
    printf("tong Prime = %d", tongPrime);
    return 0;
}
