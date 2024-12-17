#include <stdio.h>
#include <stdlib.h>
void inputarray(int array[],int*size);
void outputarray(int array[], int size);
int arraysearchinarray(int array[], int*size,int arrays[], int sizes);
void deletearray(int array[],int size,int sizes,int key);
int main()
{
    int arrmain[100];
    int sizemain;
    int arrsearch[100];
    int sizesearch;
    inputarray(arrmain,&sizemain);
    printf("\nArray: ");
    outputarray(arrmain,sizemain);

    int result = arraysearchinarray(arrmain,&sizemain,arrsearch,sizesearch);
    if(result  == 0){
        printf("\nunfound the array to delete");
    }else{
        printf("\ndeleted array: ");
        outputarray(arrmain,sizemain);
    }
    return 0;
}
void inputarray(int array[],int*size){
    printf("\nInput size: ");
    scanf("%d",size);
    for(int i = 0 ; i<= *size - 1;i++){
        printf("\nInput array[%d]: ",i);
        scanf("%d",&array[i]);
    }
}
void outputarray(int array[], int size){
    for(int i = 0 ; i<= size - 1;i++){
        printf("%5d",array[i]);
    }
}
int arraysearchinarray(int array[], int*size,int arrays[], int sizes){
    inputarray(arrays,&sizes);
    int a = -1;
    int flag = 1;
    for(int i = 0 ; i<= *size - 1;i++){
            if(array[i] == arrays[0]){
                a = -1;
                flag = 1;
                while(a < sizes - 1){
                    a++;
                    if(array[i] != arrays[a]){
                        flag = 0;
                    }
                    i++;
                }
                if(flag == 1){
                    i = i - a - 1;
                    deletearray(array,*size,sizes,i);
                    *size -= sizes;

                    i = -1;
                }else{
                    i = i - a - 1;
                }
            }
    }
    return flag;
}
void deletearray(int array[],int size,int sizes,int key){
    for(int i = key;i<= size - sizes - 1;i++){
        array[i] = array[i + sizes];
    }
}
