#include <stdio.h>
#include <stdlib.h>
int printNumberModFourToThree(int start, int end);
void swapNumber(int* start, int* end);
int main()
{
    int start, end;
    printf("\nNhap start di: ");
    scanf("%d", &start);
    printf("\nNhap end di: ");
    scanf("%d", &end);
    if(start > end){
        swapNumber(&start, &end);
    }
    printf("\nKeet qua ne: ");
    printNumberModFourToThree(start, end);
    return 0;
}
void swapNumber(int* start, int* end){
    int tmp = *start;
    *start = *end;
    *end = tmp;
}
int printNumberModFourToThree(int start, int end){
    for(int i = start; i <= end; i++){
        if(i % 4 == 3){
            printf("%5d", i);
        }
    }
}
