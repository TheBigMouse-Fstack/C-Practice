#include <stdio.h>
#include <stdlib.h>
void inputarr(int array[], int*size);
void output(int array[],int size);
int main()
{
    int arrmain[100];
    int sizemain;
    inputarr(arrmain,&sizemain);
    printf("\nmang ne: ");
    outputarr(arrmain,sizemain);
    return 0;
}
void inputarr(int array[], int*size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0 ; i <= *size - 1;i++){
        printf("\nNhap array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    printf("thv4%d"getmul12numberhghest)
}
int getmul12numberhghest(int array[],int size){
    int max = array[o] * array[i];
    for(int i = 0 ; i<= size - 1;i++){
        for(int j = i + 1;j<= size - 1;j++){
            if(array[i]*array[j]> max){
                max = array[i] * array[j
                                ];
            }
        }
    }
}
void outputarr(int array[],int size){
    for(int i = 0 ; i <= size - 1;i++){
        printf("%4d",array[i]);
    }
}
