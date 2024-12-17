#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, end;
    printf("\nNhap start di: ");
    scanf("%d", &start);

    printf("\nNhap end di: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    int sumPrime = 0;
    for(int number = start; number <= end; number++){
        int isPrime = 1;
        if(number >= 2){
            for(int i = 2; i <= number - 1; i++){
                if(number % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                sumPrime += number;
            }
        }
    }
    printf("\nTong Prime = %d", sumPrime);`
    return 0;
}







