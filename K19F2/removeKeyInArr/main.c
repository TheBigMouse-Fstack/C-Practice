#include <stdio.h>
#include <stdlib.h>

void inputarray (int array[], int*size);
void outputarray(int array[], int size);
void deletearray(int array[],int size,int key,int arraytmp[],int*sizetmp);
int main()
{
    int arrmain[100];
    int sizemain;
    int key;
    int arraytmp[100] = {1,2,3};
    int sizetmp = 3;
    inputarray(arrmain,&sizemain);
    printf("\nMang la: ");
    outputarray(arrmain,sizemain);
    printf("\nNhap key: ");
    scanf("%d",&key);
    deletearray(arrmain,sizemain,key,arraytmp,&sizetmp);
    printf("\nMang moi: ");
    outputarray(arraytmp,sizetmp);

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
void deletearray(int array[],int size,int key,int arraytmp[],int*sizetmp){
    *sizetmp = 0;
    for(int i = 0 ; i<= size - 1;i++){
        if(array[i] != key){
            arraytmp[*sizetmp] = array[i];
            (*sizetmp)++;
        }
    }
    return 0;
}
