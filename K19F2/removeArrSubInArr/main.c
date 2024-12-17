#include <stdio.h>
#include <stdlib.h>

void inputarray(int array[],int*size);
void outputarray(int array[],int size);
int deletearray(int array[],int*size,int pos,int amount);
int main()
{
    int arrmain[100];
    int sizemain;
    int pos;
    int amount;
    inputarray(arrmain,&sizemain);
    printf("\nMang la: ");
    outputarray(arrmain,sizemain);

    printf("\nNhap vi tri xoa: ");
    scanf("%d",&pos);

    printf("\nnhap so luong xoa: ");
    scanf("%d",&amount);
    if(deletearray(arrmain,&sizemain,pos,amount)){
        printf("\nMang xoa thanh cong: ");
        outputarray(arrmain,sizemain);
    }else{
        printf("\nVi tri ko hop le");
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
int deletearray(int array[],int*size,int pos,int amount){
    if(pos < 0 || pos > *size - 1) return 0;
    for(int i = pos ; i <= *size - 2 ; i++){
        array[i] = array[i + amount];
    }
    *size -= amount;
    return 1;
}
