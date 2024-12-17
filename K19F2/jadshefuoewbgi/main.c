#include <stdio.h>
#include <stdlib.h>
void find(int array[],int size,int tmp[],int*sizetmp);
void cpy(int array[],int size,int arrays[],int*sizes);
void output(int array[],int size);
int main()
{
    int tmp[100] ={9};
    int sizetmp =1;
    int arrmain[100]={2,3,4,1,2,3,3,4,4,2,4,5,7,1,2};
    int sizemain = sizeof(arrmain)/sizeof(arrmain[0]);
    find(arrmain,sizemain,tmp,&sizetmp);
    output(tmp,sizetmp);
    return 0;
}
void output(int array[],int size){
    for(int i  = 0 ; i<= size -1;i++){
        printf("%4d",array[i]);
    }
}
void find(int array[],int size,int tmp[],int*sizetmp){
    int result[100]={};
    int sizeresult =0;
    int check = array[0];
    int pos = 0 ;
    while(pos <= size -1){
        result[100] ="";
        sizeresult =0;
        for(int i = pos ; i<= size -1;i++){
            pos++;
            if(array[i] < array[i+1] && array[i] != array[i+1]){
                result[sizeresult] = array[i];
                sizeresult++;
            }else{
                result[sizeresult] = array[i];
                sizeresult++;
                break;
            }
        }
        if(sizeresult > *sizetmp){
            cpy(result,sizeresult,tmp,sizetmp);
        }
    }
}
void cpy(int array[],int size,int arrays[],int*sizes){
    *sizes = 0;
    for(int i =0 ;i<= size -1;i++){
        arrays[*sizes] = array[i];
        (*sizes)++;
    }
    return 0;
}
