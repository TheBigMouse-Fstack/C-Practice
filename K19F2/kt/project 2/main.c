#include <stdio.h>
#include <stdlib.h>
void input(int array[],int*size);
void output(int array[],int size);
void splice(int array[],int*size,int pos,int amount);
int main()
{
    int arrmain[100];
    int sizemain;
    input(arrmain,&sizemain);
    splice(arrmain,&sizemain,2,5);
    output(arrmain,sizemain);
    return 0;
}
void input(int array[],int*size){
    printf("\nNhap size: ");
    scanf("%d",size);
    for(int i = 0 ; i<= *size -1;i++){
        printf("Nhap array[%d]: ",i);
        scanf("%d",&array[i]);
    }
}
void output(int array[],int size){
    for(int i = 0 ; i<= size -1;i++){
        printf("%4d",array[i]);
    }
}
void splice(int array[],int*size,int pos,int amount){
    for(int i = pos ; i<= *size - amount;i++){
        array[i] = array[i + amount];
    }
    if(*size - pos >= amount){
        *size -= amount;
        return 0;
    }
    if((*size - pos) < amount){
        *size -= ((*size - pos));
        return 0;
    }
}
