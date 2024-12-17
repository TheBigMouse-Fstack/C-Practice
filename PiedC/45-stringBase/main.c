#include <stdio.h>
#include <stdlib.h>
//45-stringBase1
int strLen(char str[]);
void strCpy(char str[], char sub[]);
void strCat(char str[], char sub[]);
void strDiv(char str[], char sub[], int pos);
void strRev(char str[]);
/*
strCpy(char str[], char sub[]):
    chuoi str copy chuoi sub

strCar(char str[], char sub[]):
    chuoi str se noi voi chuoi sub

strDiv(char str[], char sub[], int pos):
    ham se chia mang str lam 2 khuc o vi tri pos
        khuc con lai luu vao sub

strRev(char str[]): dao nguoc chuoi
*/

int main()
{
    char str[100] = "xinChaoBan";
    char sub[100] = "abc";
    strRev(str);
    printf("\nString ne: %s", str);
    printf("\nSub ne: %s", sub);
    return 0;
}
void strRev(char str[]){
    int size = strlen(str);
    printf("\nSize ne: %d", size);
    for(int i = 0; i <= size/2 - 1; i++){
        char tmp = str[i];
        str[i] = str[size - i - 1];
        str[size - i - 1] = tmp;
    }
}



void strDiv(char str[], char sub[], int pos){
    sub[0] = '\0';
    int size = strLen(str);
    int sizeSub = strLen(sub);//0 vi \0 o dau
    //nhet phan tu pos den cuoi cua str vao sub
    for(int i = pos; i <= size - 1; i++){
        sub[sizeSub] = str[i];
        sizeSub++;
    }
    sub[sizeSub] = '\0';//dat lai \0
    str[pos] ='\0';//dat \0 de str ngan lai
}


void strCat(char str[], char sub[]){
    int size = strLen(str);
    int sizeSub = strLen(sub);
    for(int i = 0; i <= sizeSub - 1; i++){
        str[size] = sub[i];
        size++;
    }
    str[size] = '\0';
}





//str copy sub: nhet
void strCpy(char str[], char sub[]){
    //1. xoa str
    str[0] = '\0';
    int size = strLen(str);//0: vi \0 o dau
    int sizeSub = strLen(sub);
    for(int i = 0; i <= sizeSub - 1; i++){
        str[size] = sub[i];
        size++;
    }
    str[size] = '\0';
}
//str: "xinChaoBan\0"
//sub: "abc\0"



int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
