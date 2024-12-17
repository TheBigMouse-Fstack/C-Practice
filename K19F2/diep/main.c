#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void split(char str[], char haschToken,char strlist[][100], int*sizeList);
void join(char str[], char haschToken[],char strlist[][100], int sizeList);
int main()
{
    char str[100]={"Diep 1990 nam"};
    char strlist[50][100];
    int sizelist = 0;
    split(str,' ',strlist,&sizelist);
    for(int i = 0 ; i<= sizelist -1;i++){
        printf("\n%s",strlist[i]);
    }
    return 0;
}
void split(char str[], char haschToken,char strlist[][100], int*sizeList){
    char tmp[100]="";
    int sizetmp = 0;
    (*sizeList)= 0;
    for(int i = 0 ; i<= strlen(str) -1; i++){
        if(str[i] != haschToken){
            tmp[sizetmp] = str[i];
            sizetmp++;
        }
        if(str[i] == haschToken || i == strlen(str)-1){
            tmp[sizetmp] ='\0';
            strcpy(strlist[*sizeList],tmp);
            (*sizeList)++;
            strcpy(tmp,"");
            sizetmp=0;
        }
    }
}
