#include <stdio.h>
#include <stdlib.h>
int checkOdd(void);
int main()
{
    printf("\nKet qua la %d", checkOdd());
    return 0;
}
int checkOdd(void){
    int number;
    printf("\nNhap so vo di em: ");
    scanf("%d", &number);
    return number % 2 == 0;
}
