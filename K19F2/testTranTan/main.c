#include <stdio.h>
#include <stdlib.h>
// viet ham tach 1 mang thanh 2 mang dua vao vi tri pos
void input(int array[], int * size);
void output(int array[], int  size);
void splice(int array[], int*size,int arraysub[],int*sizesub,int pos);
int main()
{
    int arrmain[100];
    int sizemain;
    int arrsub[100];
    int sizesub;
    input(arrmain,&sizemain);
    splice(arrmain,&sizemain,arrsub,&sizesub,5);
    output(arrmain,sizemain);
    printf("\n");
    output(arrsub,sizesub);
    return 0;
}
void input(int array[], int * size){
    printf("\nNhap kich thuoc:  ");
    scanf("%d",size);
    for(int i = 0 ; i<= *size - 1;i++){
        printf("\nNhap array[%d]: ",i);
        scanf("%d",&array[i]);
    }
}
void output(int array[], int  size){
    for(int i = 0 ; i<= size - 1 ; i++){
        printf("\%4d ",array[i]);
    }
}
void splice(int array[], int*size,int arraysub[],int*sizesub,int pos){
    *sizesub = 0 ;
    for(int i = pos;i <= *size - 1;i++ ){
        arraysub[(*sizesub)++] = array[i];
    }
    *size -=pos;
}
