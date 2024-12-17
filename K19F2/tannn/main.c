#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void split(char str[],char token,char strlist[][100],int*sizel);
int caculasecond(int array[],int size,int sizel);
int main()
{
    char str[100] = "02:11:09";
    char strlist[50][100];
    int array[100];
    int size = 0;
    int sizel = 0;
    split(str,':',strlist,&sizel);
    for(int i = 0 ; i<= sizel -1;i++){
        array[size] = atoi(strlist[i]);
        size++;
    }
    printf("%d",caculasecond(array,size,sizel));
    return 0;
}
void split(char str[],char token,char strlist[][100],int*sizel){
    *sizel=0;
    int size = strlen(str);
    char tmp[100]="";
    int sizetmp =0;
    int pos = 0;
    while(pos <= size - 1){
        tmp[0] = '\0';
        sizetmp=0;
        for(int i = pos ; i<= size -1;i++){
            pos++;
            if(str[i] != token){
                tmp[sizetmp] = str[i];
                sizetmp++;
            }else break;
        }
        tmp[sizetmp] = '\0';
        strcpy(strlist[*sizel],tmp);
        (*sizel)++;
    }
}
int caculasecond(int array[],int size,int sizel){
    int sum =0;
    for(int i = 0 ; i<= sizel -1 ;i++){
        if(i == 0){
                sum+=(array[i]*60*60);
        }else if(i == 1){
                sum+=(array[i]*60);
        }else if(i == 2){
                sum+=array[i];
        }
    }
    return sum;
}
