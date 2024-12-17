#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//48-stringwork2
//validName: "  lE    ho     DiEp        "
int splice(char str[], int pos, int amount);
void trim(char str[]);
void validName(char str[]);
void revWordInStr(char str[]);
int main()
{
    char str[100] = "lE hO diEP";
    revWordInStr(str);
    printf("\nStr: '%s'", str);
    return 0;
}
void revWordInStr(char str[]){
    char tmp[100] = "";
    int sizeTmp = 0;
    char result[100] = "";
    strrev(str);
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] != 32){
            tmp[sizeTmp] = str[i];
            sizeTmp++;
        }
        if(str[i] == 32 || i == strlen(str) - 1){
            tmp[sizeTmp] = '\0';
            strrev(tmp);
            strcat(result, tmp);
            strcat(result, " ");
            strcpy(tmp, "");
            sizeTmp = 0;
        }
    }
    result[strlen(result) - 1] = '\0';
    strcpy(str, result);
}

/*
void revWordInStr(char str[]){
    char tmp[100] = "";
    int sizeTmp = 0;
    char result[100] = "";
    strrev(str);//"nab oahc nix:"
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] != 32){
            //neu khac dau space thi nhet vao tmp
            tmp[sizeTmp] = str[i];
            sizeTmp++;
        }
        if(str[i] == 32 || i == strlen(str) - 1){
            tmp[sizeTmp] = '\0';
            strrev(tmp);//dao lai tu vua lay ra
            strcat(result, tmp);//noi tmp vao result
            strcat(result, " ");
            strcpy(tmp, "");//xoa sach tmp cho tu tiep theo
            sizeTmp = 0;
        }
    }
    result[strlen(result) - 1] = '\0';
    strcpy(str, result);
}
*/



void validName(char str[]){
    trim(str);//"lE hO DiEp"
    strlwr(str);//"le ho diep"
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i - 1] == 32){
            if(str[i]  >= 'a' && str[i] <= 'z'){
                str[i] -= 32;
            }
        }
    }
    if(str[0] >= 'a' && str[0] <= 'z'){
        str[0] -= 32;
    }
}
void trim(char str[]){
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] == 32 && str[i + 1] == 32){
            splice(str, i, 1);
            i--;
        }
    }
    if(str[0] == 32) splice(str, 0, 1);
    if(str[strlen(str) - 1] == 32){
        str[strlen(str) - 1] = '\0';
    }
}

//" lE hO DiEp " ==> "Le Ho Diep"
/*void trim(char str[]){
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] == 32 && str[i + 1] == 32){
            splice(str, i, 1);
            i--;
        }
    }
    if(str[0] == 32) splice(str, 0, 1);
    if(str[strlen(str) - 1] == 32){
        str[strlen(str) - 1] = '\0';
    }
}*/
//"   xin    chao    ban  "

int splice(char str[], int pos, int amount){
    int size = strlen(str);
    if(pos < 0 || pos >= size) return 0;
    amount = size - pos >= amount ? amount: size - pos;
    for(int i = pos; i <= size - 1; i++){
        str[i] = str[i + amount];
    }
    str[size - amount] = '\0';
    return 1;
}

/*int splice(char str[], int pos, int amount){
    int size = strlen(str);
    if(pos < 0 || pos >= size) return 0;
    amount = size - pos >= amount ? amount : size - pos;
    for(int i = pos; i <= size - 1; i++){
        str[i] = str[i + amount];
    }
    str[size - amount] = '\0';
    return 1;
}*/
//int size = strlen(str)                             strlen(str)
//size khi ma lui, tien so voi vi tri ban dau        luc nao cung dung
