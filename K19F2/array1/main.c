#include <stdio.h>
#include <stdlib.h>

float sumarray ( int array[], int*size );
int main()
{
    const int max = 100;
    int arraymain[max];
    int sizemain;

    float result = sumarray( arraymain , &sizemain);

    printf("ket qua la %f", result);
    return 0;
}
float trungbinhcong(int array[], int*size){
    float result;
    float sum = 0;
    printf("\nBan se nhap bao nhieu so: ");
    scanf("%d", &size);
    for(int i = 0 ; i<= *size - 1; i++){
        printf("\nNhap array[%d] : ",i);
        scanf("%d", array[i]);
        sum += array[i];
    }
    result = sum / size;
    return result;

}

