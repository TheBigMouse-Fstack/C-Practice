#include <stdio.h>
#include <stdlib.h>
void input(int array[],int*size);
void output(int array[], int size);
int removekeyinarray(int array[],int size,int array1[],int*size1,int key);
int deltetekeyinarray (int array[],int*size,int key);
int search(int array[], int size,int key);
int removeDuplicte(int array[],int *size);
void cpyArray(int arrayS[], int*sizeS , int arrayM[],int sizeM);
int main()
{
    int arrmain[100];
    int sizemain;
    int arr1[100];
    int size1;
    int key;
    input(arrmain,&sizemain);
    printf("\nMang la: ");
    output(arrmain,sizemain);
    printf("\nnhap key: ");
    scanf("%d",&key);

    if(deltetekeyinarray(arrmain,&sizemain,key)){
        output(arrmain,sizemain);
    }else{
        printf("\nKo co key de xoa!");
    }

    return 0;
}
void input(int array[],int*size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for (int i = 0 ; i<= *size - 1 ;i++){
        printf("\nNhap array[%d]: ",i);
        scanf("%d",&array[i]);
    }
}
void output(int array[], int size){
    for ( int i = 0 ; i<= size - 1;i++){
        printf("%4d",array[i]);
    }
}
int removekeyinarray(int array[],int size,int array1[],int*size1,int key){
    *size1 = 0;
    int flag = size;
    for(int i = 0 ; i <= size - 1;i++){
        if(array[i] != key){
            array1[*size1] = array[i];
            (*size1)++;
        }
    }
    if(flag = *size1){
        return 0;
    }
    return 1;
}
int deltetekeyinarray (int array[],int*size,int key){
    int flag = *size;
    for(int i = 0 ; i<= *size - 1;i++){
        if(array[i] == key){
            for(int a = i ; a <= *size - 2;a++){
                array[a] = array [a+1];
            }
            (*size)--;
            i--;
        }
    }
    if(*size == flag){
        return 0;
    }
    return 1;
}
int search(int array[], int size,int key){
    for(int i = 0 ; i<= size - 1;i++){
        if(array[i] == key) return i;
    }
    return -1;
}
int removeDuplicte(int array[],int *size){
    int tmp[100];
    int sizetmp = 0;
    int count = 0 ;
    for(int i = 0 ; i<= *size - 1;i++){
        if(search(tmp,sizetmp,array[i]) == -1){
            tmp[sizetmp] = array[i];
            sizetmp++;
    }else{
        count++;
    }
    }
    cpyArray(array[],&size,tmp[],sizetmp);
}
void cpyArray(int arrayS[], int*sizeS , int arrayM[],int sizeM){
    for(int i = 0; i <= sizeM - 1 ;i-=-1){
        arrayS[i] = arrayM[i];
        *sizeS = sizeM;
    }
}
int removeDuplicte1(int array[],int *size){
    flag == *size;
    for(int i = 0 ; i<= *size - 2;i++){
        for(int j = i++;j<= *size -1;j++){
            if(array[i] = array[j]){
                    for(int a = i ; a <= *size - 2;a++){
                        array[a] = array [a+1];
                    }
                    (*size)--;
                    i--;
                }
        }
        if(*size == flag){
            return 0;
        }
    }
    return 1;
}
