#include <stdio.h>
#include <stdlib.h>
void inputarray(int array[], int*size);
void outputarray (int array[], int size);
void insteadarray(int array[], int pos,int key);
int main()
{
    int arrmain[100];
    int sizemain;

    inputarray(arrmain, &sizemain);
    printf("\nMang luc dau:");
    outputarray(arrmain,sizemain);

    int pos;
    printf("\nNhap vi tri thay the: ");
    scanf("%d",&pos);
    int key;
    printf("\nNhap key: ");
    scanf("%d",&key);
    insteadarray(arrmain, pos,key);
    outputarray(arrmain,sizemain);

    return 0;
}
void inputarray(int array[], int*size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for (int i = 0 ; i<= *size - 1;i++){
        printf("\nNhap array[%d]: ",i);
        scanf("%d",&array[i]);
    }
}
void outputarray (int array[], int size){
    for(int i = 0 ; i <= size - 1; i++){
        printf("%4d",array[i]);
    }
}
void insteadarray(int array[], int pos,int key){
    array[pos] = key;
}
