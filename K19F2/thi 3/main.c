#include <stdio.h>
#include <stdlib.h>
void inputarr(int array[],int*size);
void outtputarr(int array[],int size);
void sort(int array[],int size);
int main()
{
    int arrmain[100];
    int sizemain;
    inputarr(arrmain,&sizemain);
    sort(arrmain,sizemain);
    outtputarr(arrmain,sizemain);
    return 0;
}
void inputarr (int array[],int*size){
    printf("\nNhap size: ");
    scanf("%d",size);
    for(int i = 0 ; i<= *size -1;i++){
        printf("\nNhap arr[%d]: ",i);
        scanf("%d",&array[i]);
    }
}
void outtputarr (int array[],int size){
    for(int i = 0 ; i<= size -1;i++){
        printf("%4d",array[i]);
    }
}
void sort(int array[],int size){
    for(int i = 0 ; i<= size - 2;i++){
        if(array[i] > array[i+1]){
            int tmp = array[i];
            array[i] = array[i+1];
            array[i+1] = tmp;
            i = -1;
        }
    }
}
