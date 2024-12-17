#include <stdio.h>
#include <stdlib.h>
float arrsum (int arr[], float sizemain);
int main()
{
    const int MAX =100;
    int arraymain[MAX];
    int sizemain = 0;
    printf("\nNhap so luong: ");
    scanf("%d", &sizemain);
    for(int i = 0; i <= sizemain - 1 ; i++){
        printf("\nNhap arr [%d]: " ,i);
        scanf("%d", &
              arraymain[i]);
    }
    float result = arrsum(arraymain,sizemain);
    printf("\nTrung binh cong : %f", result);
    return 0;
}
float arrsum (int arr[], float sizemain)
{
    float sum = 0;
    for(int i = 0; i <= sizemain - 1; i++){
        sum+= arr[i];
    }
    float result = sum / sizemain;
    return result;

}
