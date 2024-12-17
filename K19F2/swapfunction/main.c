#include <stdio.h>
#include <stdlib.h>

void swapfunction(int* numberA , int* numberB);
int main()
{
    int numberA , numberB;
    printf("\nNhap numberA: ");
    scanf("%d", &numberA);
    printf("\nNhap numberB: " );
    scanf("%d", &numberB);
    swapfunction(&numberA,&numberB);
    printf("\nNumberA: %d",numberA);
    printf("\nNumberB: %d",numberB);
    return 0;
}
void swapfunction(int* numberA, int* numberB){
    int tmp = *numberA;
    *numberA = *numberB;
    *numberB = tmp;
}
