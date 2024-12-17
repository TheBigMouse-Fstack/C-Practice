#include <stdio.h>
#include <stdlib.h>
void cpyArray(int arrayS[], int*sizeS , int arrayM[],int sizeM);
void inputarray(int array[], int*size);
void outputarray(int array[], int size);
void changesecondnumber(int arrayS[], int*sizeS , int arrayM[],int sizeM);
int main()
{
    int arrmain[100];
    int sizemain;
    int arraytest[100];
    int sizetest = 1;
    inputarray(arrmain,&sizemain);
    printf("\nMang la: ");
    outputarray(arrmain,sizemain);

    cpyArray(arraytest,&sizetest,arrmain,sizemain);
    printf("\nMang copy la: ");
    outputarray(arraytest,sizetest);

    changesecondnumber(arraytest,&sizetest,arrmain,sizemain);

    printf("\nMang moi la: ");
    outputarray(arrmain,sizemain);
    return 0;
}
void inputarray(int array[], int*size){
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);
    for(int i = 0 ; i<= *size - 1; i++){
        printf("\nNhap array[%d]: ",i);
        scanf("%d", &array[i]);
    }
}
void outputarray(int array[], int size){
    for(int i = 0 ; i <= size -1; i++){
        printf("%4d",array[i]);
    }
}
void changesecondnumber(int arrayS[], int*sizeS , int arrayM[],int sizeM){
    int count=0;
    for(int i = 0 ; i <= sizeM - 1 ; i++){
        count = 0;
        for(int j = 0 ; j <= sizeM - 1 ; j++){
            if(arrayS[i] == arrayS[j]){
                count++;
            }
            if(count == 2){
                arrayM[j] = 0;
                break;
            }
        }
    }
}
void cpyArray(int arrayS[], int*sizeS , int arrayM[],int sizeM){
    for(int i = 0; i <= sizeM - 1 ;i-=-1){
        arrayS[i] = arrayM[i];
        *sizeS = sizeM;
    }
}

