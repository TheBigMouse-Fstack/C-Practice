#include <stdio.h>
#include <stdlib.h>
void inputarray(int array[],int*size);
void outputarray(int array[],int size);
int insteadarray(int array[],int size,int pos,int key);
int insertarray(int array[],int*size,int pos,int key);
int deletearray(int array[],int*size,int pos);
int checkanna(int array[],int size);
int main()
{
    int arrmain[100];
    int sizemain;
    int pos;
    int key;

    inputarray(arrmain,&sizemain);
    printf("\nMang la: ");
    outputarray(arrmain,sizemain);
/*
    printf("\nNhap vi tri thay the: ");
    scanf("%d",&pos);
    printf("\nNhap con so thay the: ");
    scanf("%d",&key);

    if(insteadarray(arrmain,sizemain,pos,key) == 1){
        printf("\nMang thay the thanh cong: ");
        outputarray(arrmain,sizemain);
    }else{
        printf("\nVi tri ko hop le");
    }

printf("\nNhap vi tri them: ");
    scanf("%d",&pos);
    printf("\nNhap con so them: ");
    scanf("%d",&key);

    if(insertarray(arrmain,&sizemain,pos,key) == 1){
        printf("\nMang them thanh cong: ");
        outputarray(arrmain,sizemain);
    }else{
        printf("\nVi tri ko hop le");
    }

    printf("\nNhap vi tri xoa: ");
    scanf("%d",&pos);
    if(deletearray(arrmain,&sizemain,pos) == 1){
        printf("\nMang xoa thanh cong: ");
        outputarray(arrmain,sizemain);
    }else{
        printf("\nVi tri ko hop le");
    }
*/
    if(checkanna(arrmain,sizemain)){
        printf("\nMang doi xung");
    }else{
        printf("\nMang ko doi xung");
    }
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
int insteadarray(int array[],int size,int pos,int key){
    if(pos < 0 || pos > size - 1 ) return 0;
    array[pos] = key;
    return 1;
}
int insertarray(int array[],int*size,int pos,int key){
    if(pos < 0 || pos > *size) return 0;
    (*size)++;
    for(int i = *size - 1 ; i > pos;i--){
        array[i] = array[i - 1];
    }
    array[pos] = key;
    return 1;
}
int deletearray(int array[],int*size,int pos){
    if(pos < 0 || pos > *size - 1) return 0;
    for(int i = pos ; i <= *size - 2 ; i++){
        array[i] = array[i + 1];
    }
    (*size)--;
    return 1;
}
int checkanna(int array[],int size){
    for(int i = 0 ; i <= (size/2 - 1) ;i++){
        if(array[i] != array[size - 1 - i]) return 0;
    }
    return 1;
}

