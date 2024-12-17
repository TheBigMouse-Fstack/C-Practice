#include <stdio.h>
#include <stdlib.h>

void inputarray (int array[], int*size);
void outputarray(int array[], int size);
int inputarrayinarray(int array[],int*size,int pos,int arraysub[],int sizesub);
int main()
{
    int arrmain[100];
    int sizemain;
    int pos;
    int arraysub[100];
    int sizesub;

    inputarray(arrmain,&sizemain);
    printf("\nMang la: ");
    outputarray(arrmain,sizemain);

    inputarray(arraysub,&sizesub);
    printf("\nMang muon nhet la: ");
    outputarray(arraysub,sizesub);

    printf("\nNhap pos: ");
    scanf("%d",&pos);

    if(inputarrayinarray(arrmain,&sizemain,pos,arraysub,sizesub)){
        printf("\nMang moi la: ");
        outputarray(arrmain,sizemain);
    }else{
        printf("\nloi");
    }

    return 0;
}
void inputarray (int array[], int*size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0 ; i<= *size - 1; i++){
        printf("\nNhap array[%d]: ",i);
        scanf("%d",&array[i]);
    }
}
void outputarray(int array[], int size){
    for(int i = 0 ; i<= size - 1;i++){
        printf("%4d",array[i]);
    }
}
int inputarrayinarray(int array[],int*size,int pos,int arraysub[],int sizesub){
    if(pos > size || pos < 0) return 0;
    for(int a = 0 ; a<= sizesub - 1;a++){
        (*size)++;
        for(int i = *size - 1 ; i >= pos;i--){
        array[i]=array[i-1];
        }
        array[pos] = arraysub[a];
        pos++;
    }
}
