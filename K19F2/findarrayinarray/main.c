#include <stdio.h>
#include <stdlib.h>
void inputarray(int array[],int*size);
void outputarray(int array[], int size);
int arraysearchinarray(int array[], int size,int arrays[], int sizes);
int main()
{
    int arrmain[100];
    int sizemain;
    int arrsearch[100];
    int sizesearch;
    inputarray(arrmain,&sizemain);
    printf("\nArray: ");
    outputarray(arrmain,sizemain);

    int result = arraysearchinarray(arrmain,sizemain,arrsearch,sizesearch);
    if(result  == 0){
        printf("\nunfound");
    }else{
        printf("\nArray stay at %d",result);
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
int arraysearchinarray(int array[], int size,int arrays[], int sizes){
    inputarray(arrays,&sizes);
    for(int i = 0 ; i<= size - 1;i++){
            if(array[i] == arrays[0]){
                int a = -1;
                int flag = 1;
                while(a < sizes - 1){
                    a++;
                    if(array[i] != arrays[a]){
                        flag = 0;
                    }
                    i++;
                }
                if(flag == 1){
                    printf("%d",a);
                    printf("%d",i);
                    i = i-a-1;
                    return i;
                }
                i = i-a-1;
            }
    }
    return 0;
}
