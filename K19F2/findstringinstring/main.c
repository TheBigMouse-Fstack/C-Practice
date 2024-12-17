#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//49-stringWork3
void split(char str[], char key,char strList[][100], int* sizeL);
void join(char strList[][100], int sizeL,char key, char str[]);
void sort(char strList[][100], int sizeL);
int main()
{
    char str[100] = "diep#1999#10#SE";
    char strList[50][100];
    int sizeL = 0;
    split(str, '#', strList, &sizeL);
    //in
    for(int i = 0 ; i <= sizeL - 1; i++){
        printf("\n'%s'", strList[i]);
    }
    //
    join(strList, sizeL, '^', str);
    printf("\nStr = '%s'", str);
    //
    char nameList[50][100] = {"Binh",
                            "Cuong",
                            "An",
                            "Dung",
                            "Em"};
    int sizeName = 5;
    sort(nameList, sizeName);
    //in
    for(int i = 0 ; i <= sizeName - 1; i++){
        printf("\n'%s'", nameList[i]);
    }
    return 0;
}
void sort(char strList[][100], int sizeL){
    for(int i = 0; i<= sizeL - 1; i++){
        for(int j = i + 1; j <= sizeL - 1; j++){
            if(strcmp(strList[i], strList[j]) == 1 ){
                //swap
                char tmp[100];
                strcpy(tmp, strList[i]);
                strcpy(strList[i], strList[j]);
                strcpy(strList[j], tmp);
            }
        }
    }
}

void join(char strList[][100], int sizeL,char key, char str[]){
    str[0] = '\0';//xóa chuỗi
    char keyS[3] = "Y";
    keyS[0] = key;
    for(int i = 0 ; i<= sizeL - 1; i++){
        strcat(str, strList[i]);
        strcat(str, keyS);
    }//"diep+1999+10+SE+"
    str[strlen(str) - 1] = '\0';
}

void split(char str[], char key,char strList[][100], int* sizeL){
    *sizeL = 0;//xóa danh sách
    int pos = 0;
    char tmp[100] = "";
    int sizeTmp = 0;
    int size = strlen(str);
    while(pos <= size - 1){
        tmp[0] = '\0';
        sizeTmp = 0;
        for(int i = pos; i <= size- 1; i++){
            pos++;
            if(str[i] != key){
                tmp[sizeTmp] = str[i];
                sizeTmp++;
            }else break;
        }
        tmp[sizeTmp] = '\0';//xử lý tmp
        //nhét tmp vào strList
        strcpy(strList[*sizeL], tmp);
        (*sizeL)++;
    }
}

//split
//      f(str, key)
//      hàm tách str thành nhiều mảng dựa trên key
//      "Diep|1999|10|SE", '|'
//      ["Diep", "1999", "10", "SE"]

//join
//  f(str[], key)
//  ["Diep", "1999", "10", "SE"], '-'
//  "Diep-1999-10-SE"

//sort danh sách tên sinh viên
