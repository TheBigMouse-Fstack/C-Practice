#include <stdio.h>
#include <stdlib.h>
void input(int array[],int*size);
void output(int array[],int size);
int find(int array[],int size,int key);
int main()
{
    int arrmain[100];
    int sizemain;
    input(arrmain,&sizemain);
    printf("%d",find(arrmain,sizemain,4));
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
int find(int array[],int size,int key){
    for(int i = 0 ; i<= size -1;i++){
        if(array[i] == key) return i;
    }
    return -1;
}
