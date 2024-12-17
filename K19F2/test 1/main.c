#include <stdio.h>
#include <stdlib.h>
int sumodd(int number);
int main()
{
    int number;
    printf("\nNhap number: ");
    scanf("%d",&number);
    printf("\nTong la:%d",sumodd(number));
    return 0;
}
int sumodd(int number){
    int sum = 0;
    for(int i = 1; i <= number ; i++){
        if(i % 2 != 0){
            sum += i;
        }
    }
    return sum;

}
