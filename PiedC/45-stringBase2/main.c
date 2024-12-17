#include <stdio.h>
#include <stdlib.h>
//45-stringBase2
//45-stringBase2
/*
    charInStr(char str[], char ch): tìm ký tự ch
            nằm ở đâu trong chuỗi str
    delCharInStr(char str[], int pos): xóa pt ở vị
        trí thứ pos trong chuỗi str
    insertCharInStr(char str[], char ch, int pos):
        nhét ký tự ch vào vị trí pos trong str
    insertStrIntoStr(char str[], char sub[], int pos):
        nhét chuỗi sub vào str ở vị trí pos
*/
int strLen(char str[]);
int charInStr(char str[], char ch);
char delCharInStr(char str[], int pos);
int insertCharInStr(char str[], char ch, int pos);
void insertStrIntoStr(char str[], char sub[], int pos);
int main()
{
    char str[100] = "ahihichubaba";
    char sub[100] = "Lon";
    insertStrIntoStr(str, sub, 3);
    printf("\nString ne: %s", str);
    return 0;
}
void insertStrIntoStr(char str[], char sub[], int pos){
    int sizeSub = strLen(sub);
    int size = strLen(str);
    //don tu pos ra 1 khoang
    if(pos < 0 || pos > size) return 0;
    for(int i = size - 1; i >= pos; i--){
        str[i + sizeSub] = str[i];
        printf("\nI ne: %d", i);
    }
    str[size + sizeSub] = '\0';
    //nhet sub vao khoang trong tu pos tro di
    for(int i = 0; i <= sizeSub - 1; i++){
        str[pos + i] = sub[i];
    }
    return 1;
}
int insertCharInStr(char str[], char ch, int pos){
    /*int size = strLen(str) + 1;
    for(int i = size - 1; i >= pos; i--){
        str[i] = str[i - 1];
    }*/
    int size = strLen(str);
    if(pos < 0 || pos > size) return 0;
    for(int i = size - 1; i <= pos; i++){
        str[i + 1] = str[i];
    }
    str[size + 1] = '\0';//doi \0 ra ngoai 1 don vi
    str[pos] = ch;
    return 1;
}
char delCharInStr(char str[], int pos){
    int size = strLen(str);//don do trong
    if(pos < 0 || pos >= size) return '\0';
    char ch = str[pos];//luu lai phan tu truoc khi xoa
    for(int i = pos; i <= size - 1; i++){
        str[i] = str[i + 1];
    }
    str[size - 1] = '\0';//dat \0 doi vao trong 1 don vi
    return ch;//nem phan tu da luu
}
int charInStr(char str[], char ch){
    int size = strLen(str);
    for(int i = 0; i <= size - 1; i++){
        if(str[i] == ch) return i;
    }
    return -1;
}
int strLen(char str[]){
    int size = 0;
    while(str[size] != '\0') size++;
    return size;
}
