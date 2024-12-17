#include <stdio.h>
#include <stdlib.h>

void inputarray (int array[], int*size);
void outputarray(int array[], int size);
void removeDuplicat(int array[], int size,int tmp[],int*sizetmp);
int main()
{
    int arrmain[100];
    int sizemain;
    int arraytmp[100] = {1,2,3};
    int sizetmp = 3;
    inputarray(arrmain,&sizemain);
    printf("\nMang la: ");
    outputarray(arrmain,sizemain);
    removeDuplicat(arrmain,sizemain,arraytmp,&sizemain);
    printf("\nMnag moi la: ");
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
void removeDuplicat(int array[], int size,int arraytmp[],int*sizetmp){
    *sizetmp = 0;
    for(int a = 0 ; a<= size - 1;a++){
        for(int i = 0; i<= *sizetmp - 1;i++){
            if(array[a] == arraytmp[i]){
                arraytmp[*sizetmp] = array[a];
                (*sizetmp)++;
            }
        }
    }
}
