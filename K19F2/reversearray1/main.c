#include <stdio.h>
#include <stdlib.h>
void inputarray (int array[], int*size);
void outputarray(int array[], int size);
void reversearray(int array[], int size);
void reverseArrayV2(int array[], int size);
int main()
{
    int arrmain[100];
    int sizemain = 0;
    inputarray(arrmain,&sizemain);
    printf("\nMang la: ");
    outputarray(arrmain,sizemain);

    reversearrayV2(arrmain,sizemain);
    printf("\nMang dao nguoc la: ");
    outputarray(arrmain,sizemain);

    return 0;
}
void inputarray (int array[], int*size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0 ; i <= *size -1 ; i++){
        printf("\nNhap array[%d]: ",i);
        scanf("%d",&array[i]);
    }
}
void outputarray(int array[], int size){
    for(int i = 0 ; i <= size - 1; i++){
        printf("%4d",array[i]);
    }
}
void reversearray(int array[], int size){
    int arraytmp[100];
    int sizetmp = 0;
    for(int i = size - 1 ; i >= 0 ; i--){
        arraytmp[sizetmp] = array[i];
          sizetmp++;
    }
    for(int i = 0 ; i<= size-1; i++){
        array[i] = arraytmp[i];
    }
}
void reverseArrayV2(int array[], int size){
    for(int i = 0; i<= (size/2) - 1; i++){
        array[i]= array[size - i - 1];
    }
}

