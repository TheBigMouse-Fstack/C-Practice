#include <stdio.h>
#include <stdlib.h>

float geometric(int start, int end);
int main()
{
    int start , end;
    printf("\nNhap start: ");
    scanf("%d" , &start);
    printf("\nNhap end: ");
    scanf("%d", end);
    int result = geometric(start,end);
    printf("\nKet qua la %d", result);
    return 0;
}
float geometric(int start, int end){
    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    int mul = 1;
    int count = 0;
    for(int i = start; i <= end; i++){
        mul*=i;
        count++;
    }
    return pow(mul , 1.0/count);
}
