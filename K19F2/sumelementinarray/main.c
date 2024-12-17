#include <stdio.h>
#include <stdlib.h>

int sumElement (int array[], int size);
int main()
{
    int a
    printf("%d",sumElement( array[], size));
    return 0;
}
/*
array: 2 8 6 9 5
i    : 1 2 3 4 5   size: 5
*/
int sumElement (int array[], int size)
{
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        sum += array[i];
    }
    return sum;
}
