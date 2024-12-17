#include <stdio.h>
#include <stdlib.h>
int sumprimearr (int arr[], int sizemain);
int main()
{
    const int MAX = 100;
    int arraymain[MAX];
    int sizemain = 0;
    printf("\nNhap so luong: ");
    scanf("%d", &sizemain);
    for(int i = 0; i<= sizemain - 1; i++){
        printf("\nNhap arr[%d]: ", i);
        scanf("%d", &arraymain[i]);
    }
    int result = sumprimearr(arraymain , sizemain);
    printf("\ntong cac so nguyen to la: %d", result);
    return 0;
}
int sumprimearr (int arr[], int sizemain){
    int sum = 0;
    for(int i = 0; i<= sizemain - 1; i++){
        if(arr[i] > 1 ){
            int isprime = 1;
            for(int n = 2 ; n <= arr[i]- 1; n++){
                if(arr[i]%n == 0){
                    isprime = 0;
                }
            }
            if(isprime == 1){
                sum += arr[i];
            }
        }
    }
    return sum;

}
