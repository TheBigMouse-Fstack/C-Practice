#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*
//revWordInStr
//  f(str)
//  str: "xin chao ban" -> "ban chao xin"
//****************
//split
//      f(str, key, strList[])
//      hàm tách str thành nhiều mảng dựa trên key
//      "Diep|1999|10|SE", '|'
//      ["Diep", "1999", "10", "SE"]

//join
//  f(strList[], key)
//  ["Diep", "1999", "10", "SE"], '-'
//  "Diep-1999-10-SE"
*/

void printStringArray(char strlist[][100], int rows) ;
void splitt(char str[],char key,char strlist[][100]);
void ValidName(char str[]);
void trim(char str[]);
void getaphabet(char str[]);
int findNumberandSpecial (char str[]);
int splice(char str[],int pos,int count);
int findRemoveVowel(char str[]);
int RemoveVowel(char str[]);
int main() {
    char strArray[] = "xin,chao,ban";
    char strList[3][100];

    splitt(strArray, ',', strList);
    printStringArray(strList, sizeOStringArray(strList,3));

    return 0;
}
//TREN LA MAIN
void sizeOStringArray(char strlist[][100], int rows){
    int totalLength = 0;
    for (int i = 0; i < rows; i++) {
        int length = 0;
        while (strlist[i][length] != '\0') {
            length++;
        }
        totalLength += length;
    }
}
void printStringArray(char strlist[][100], int rows) {
    for (int i = 0; i < rows; i++) {
        printf("%s ", strlist[i]);
    }
}
void splitt(char str[], char key, char strlist[][100]) {
    int count = 0;
    char *token = strtok(str, &key);
    while (token != '\0') {
        strcpy(strlist[count], token);
        count++;
        token = strtok('\0', &key);
    }
}
void ValidName(char str[]){
    int size = strlen(str);
    for(int i = 0 ;i<= size - 1;i++){
        if(str[i] == 32){
            str[i+1] -= 32;
        }
    }
}
void trim(char str[]){
    int size = strlen(str);
    for(int i = 0 ;i<= size - 1;i++){
        if(str[i] == 32 && str[i+1] == 32 ){
            splice(str,i,1);
            i--;
        }
    }
    if(str[0] == 32) splice(str, 0,1);
    if(str[strlen(str) - 1] == 32) splice(str,strlen(str) -1 ,1);
}
int findRemoveVowel(char str[]){
    int size = strlen(str);
    for(int i = 0 ;i<= size - 1;i++){
        if(strchr("aouieAOUIE",str[i])) return i;
    }
    return -1;
}
int RemoveVowel(char str[]){
    while(splice(str,findRemoveVowel(str),1));
}
int splice(char str[],int pos,int count){
    int size = strlen(str);
    if(pos > size || pos < 0) return 0;
    for(int i = pos;i<= size - 1;i++){
        str[i] = str[i + count];
    }
    if(count <= (size - pos)){
        str[size - count] = '\0';
    }else{
        str[size - pos] = '\0';
    }
}
int findNumberandSpecial (char str[]){
    int size = strlen(str);
    for(int i = 0 ;i<= size - 1;i++){
        if(str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122){

        }else{
            return i;
        }
    }
    return -1;
}
void getaphabet(char str[]){
    while(splice(str,findNumberandSpecial(str),1));
}
