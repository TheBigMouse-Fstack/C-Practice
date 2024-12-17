#include <stdio.h>
#include <stdlib.h>
void inputarr(int array[],int*size);
void outtputarr(int array[],int size);
int splice(int array[], int * size,int pos,int count);
int find(int array[],int size,int key);
int main()
{
    int arrmain[100];
    int sizemain;
    int key;
    inputarr(arrmain,&sizemain);
    printf("\nNhap key: ");
    scanf("%d",&key);
    while(splice(arrmain,&sizemain,find(arrmain,sizemain,key),1));
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
int find(int array[],int size,int key){
    for(int i = 0 ; i<= size - 1;i++){
        if(array[i] == key){
            if(i == size - 1) return -1;
            for(int j = size -1 ; j>i;j--){
                    if(array[j] == key) return i;
            }
            return -1;
        }
    }
}
int splice(int array[], int * size,int pos,int count){
    if(pos < 0 || pos > *size -1) return 0;
    for(int i = pos ; i<= *size -count;i++){
        array[i] = array[i+count];
    }
    if(*size - pos > count) *size -=count; return 1;
    if(*size - pos < count) *size -=(*size - pos); return 1;
}
