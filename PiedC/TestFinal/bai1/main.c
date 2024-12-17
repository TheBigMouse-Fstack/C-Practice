#include <stdio.h>
#include <stdlib.h>
int giaiThua(int number);
int main()
{
    int number;
    printf("\nNhap so di: ");
    scanf("%d", &number);
    printf("\nKet qua ne: %d", giaiThua(number));
    return 0;
}
int giaiThua(int number){
    int isGiaiThua = 1;
    if(number < 0){
        isGiaiThua = 0;
    }
    int res = 1;
    for(int i = 1; i <= number; i++){
        res = res * i;
    }
    return res * isGiaiThua;
}
