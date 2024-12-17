#include <stdio.h>
#include <stdlib.h>

const int MAX = 100;
// input array
void inputArray(int arrayMain[], int * size);
int main()
{
    int arrayMain[MAX]; // tao 10 bien
    int sizeMain = 0; //kich thuoc gia

    inputArray(arrayMain, &sizeMain);
    printf("\nMang vua nhap ne: ");

    for(int i = 0 ; i <= sizeMain - 1 ; i++){
        printf("%5d", arrayMain[i]);
    }
    return 0;
}

void inputArray(int array[], int*size){
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);

    for(int i = 0 ; i <= *size - 1; i++){
        printf("\nNhap array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}

//size = *sizemain
//*size = sizemain
