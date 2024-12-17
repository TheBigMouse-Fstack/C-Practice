#include <stdio.h>
#include <stdlib.h>
int checkprime ( int number);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    int check = checkprime(n);
    check ? printf("\nis prime") : printf("\nis not prime");
    return 0;
}
int checkprime(int number){
    if(n >= 2){
        for(int i = 2 ; i <= number - 1; i++){
            if( number % i == 0){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
