#include <stdio.h>
#include <stdlib.h>
/*
Sắp xếp mảng theo thứ tự tăng dần, nhưng giữ nguyên vị trí của số 0:

**Sắp xếp mảng theo thứ tự tăng dần, nhưng giữ nguyên vị trí của số 0:

Input: 1 4 5 6 0 3 2 1 5 4 7 9 0

Ouput: 1 1 2 3 0 4 4 5 5 6 7 9 0
*/
void inputarray(int array[],int*size);
void outputarray(int array[],int size);
void softarray(int array[],int size,int )
int main()
{
    int arrmain[100];
    int sizemain;
    inputarray(arrmain,&sizemain);
    printf("\nMang la: ");
    outputarray(arrmain,sizemain);

    return 0;
}
void inputarray(int array[],int*size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0 ; i<= *size - 1;i++){
        printf("\nNhap array[%d]: ",i);
        scanf("%d",&array[i]);
    }
}
void outputarray(int array[],int size){
    for(int i = 0  ; i <= size  - 1;i++){
        printf("%4d",array[i]);
    }
}
