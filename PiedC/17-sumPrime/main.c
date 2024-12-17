#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, end;
    int number;
    printf("\nNhap start di em: ");
    scanf("%d", &start);

    printf("\nNhap end di em: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
        printf("\nM nhap lao 1 lan nua t dam chetme m:D");
    }
    int sumPrime = 0;
    for(number = start; number <= end; number++){
        int isPrime = 1; //reset niem tin
        if(number >= 2){
            for(int i = 2; i <= number - 1; i++){
                if(number % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                sumPrime += number;//nhet so vao sumPrime
            }
        }
    }//number 1 2 3 4 5
    printf("\nTong cua em ne: %d", sumPrime);
    return 0;
}
