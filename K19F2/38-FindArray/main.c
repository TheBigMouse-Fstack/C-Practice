#include <stdio.h>
#include <stdlib.h>
void input(int array[], int*size);
void output(int array[], int size);
int findfirstindex(int array[], int size, int key);
void findlistindex(int array[], int size, int arrayR[], int*sizeR,  int key);
int main()
{
    int arrayresult[100]= {1,2,3,4,5,6};
    int sizeresult = 6;
    int key;
    int arrmain[100];
    int sizemain;
    input(arrmain,&sizemain);
    printf("\nMang la: ");
    output(arrmain,sizemain);
    printf("\nNhap key: ");
    scanf("%d",&key);

    findlistindex(arrmain, sizemain, arrayresult, &sizeresult, key);

    if(findlistindex == 0){
        printf("\nKhong tim thay");
    }else{
        printf("\nNhung vi tri xuat hien la: ");
         output(arrayresult, sizeresult);
    }
/*
    output(arrmain,sizemain);
    printf("\nNhap key: ");
    scanf("%d",&key);
    int pos = findfirstindex(arrmain,sizemain,key);
    if(pos == -1){
        printf("\nKo tim thay");
    }else{
        printf("\ntim thay o vi tri %d",pos);
    }
    */
    return 0;
}
void input(int array[], int*size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0 ; i<= *size - 1; i++){
        printf("\nNhap array[%d]: ",i);
        scanf("%d",&array[i]);
    }
}
void output(int array[], int size){
    for(int i = 0 ; i <= size -1 ;i++){
        printf("%4d",array[i]);
    }
}
int findfirstindex(int array[], int size, int key){
    for(int i = 0 ; i<= size -1;i++){
        if(array[i] == key){
            return i;
        }
    }
    return -1;
}
void findlistindex(int array[], int size, int arrayR[], int*sizeR, int key){
    *sizeR=0;
    for(int i = 0 ; i<= size - 1; i++){
        if(array[i] == key){
            arrayR[*sizeR] = i;
            (*sizeR)++;
        }
    }
}
