#include <stdio.h>
#include <stdlib.h>
void split(int array[],int size,int key);
int maxnumber(int array[],int size);
void output(int array[],int size);
int main()
{
    int arrmain[100] = {2,1,4,6,3,7,6,4,8,9,3};
    int sizemain = 11;
    split(arrmain,sizemain,3);
    return 0;
}
void split(int array[],int size,int key){
    int tmp[100];
    int sizetmp = 0;
    int check = 0;
    while(check <= size -1){
        sizetmp = 0;
        for(int i = check; i<= size -1;i++){
            check++;
            if(i % key !=0 || i ==0){
                tmp[sizetmp] = array[i];
                sizetmp++;
            }else break;
        }
        printf("%d",maxnumber(tmp,sizetmp));
    }
}
int maxnumber(int array[],int size){
    int max = 0;
    for(int i = 0 ; i<= size -1;i++){
        if(max < array[i]){
            max = array[i];
        }
    }
    return max;
}
void output(int array[],int size){
    for(int i = 0 ; i<= size -1;i++){
        printf("%4d",array[i]);
    }
}
