#include <stdio.h>
#include <stdlib.h>
void inputarr (int array[], int*size);
void outputarr (int array[], int size);
void addkeyarr(int key , int array[], int*size);
int main()
{
    int arrmain[100];
    int sizemain;

    inputarr(arrmain,&sizemain);
    addkeyarr(10,arrmain,&sizemain);


    printf("\nMang la: ");
    outputarr(arrmain,sizemain);
    return 0;
}
void inputarr (int array[], int*size){
    printf("\nnhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0 ; i<= *size - 1;i++){
        printf("\nNhap array[%d]: ",i);
        scanf("%d",&array[i]);
    }
}
void outputarr (int array[], int size){
    for(int i = 0 ; i<= size - 1;i++){
        printf("%5d",array[i]);
    }
}
void addkeyarr(int key , int array[], int*size){
    (*size)++;
    array[*size] = key;
}
int addkey(int key , int pos , int array[], int*size){
    for(int i = *size - 1 ; i>pos -1;i--){
        array[i+1] = array[i];
    }
    array[pos] = key;
    return ;
}

