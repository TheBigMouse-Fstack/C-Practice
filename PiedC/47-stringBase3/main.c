#include <stdio.h>
#include <stdlib.h>
//47-stringBase3
int strLen(char str[]);
void strUpr(char str[]);
int splice(char str[], int pos, int amount);
int removeKey(char str[], char key);
int removeDup(char str[]);
int strInStr(char str[], char sub[]);
void delSubInStr(char str[], char sub[]);
int main()
{
    char str[100] = "xemmotbophimmoi";

    //strUpr(str);
    //removeDup(str);
    delSubInStr(str, "mo");
    printf("\nChuoi ne: %s", str);
    return 0;
}
void delSubInStr(char str[], char sub[]){
    while(splice(str, strInStr(str, sub), strLen(sub)));
}

int strInStr(char str[], char sub[]){
    int check = 0;
    for(int i = 0; i <= strLen(str) - 1; i++){
        if(str[i] == sub[check]){
            if(check == strLen(sub) - 1) return i - check;
            check++;
        }else{
            i -= check;
            check = 0;
        }
    }
    return -1;
}
int removeDup(char str[]){
    int count = 0;
    for(int i = 0; i <= strLen(str) - 2; i++){
        for(int j = i + 1; j <= strLen(str) - 1; j++){
            if(str[i] == str[j]){
                splice(str, j, 1);
                j--;
                count++;
            }
        }
    }
    return count;
}

int removeKey(char str[], char key){
    int count = 0;
    //tim thi choi size truc tiep *tranh de bien bi thay doi
    for(int i = 0; i <= strLen(str) - 1; i++){
        if(str[i] == key){
            splice(str, i, 1);
            i--;//lui lay da
            count++;
        }
    }
    return count;
}

int splice(char str[], int pos, int amount){
    int size = strLen(str);
    if(pos < 0 || pos >= size) return 0;
    //don cac phan tu vao trong
    for(int i = pos; i <= size - 1; i++){
        str[i] = str[i + amount];
    }
    //tinh amount thuc te co the xoa
    amount = size - pos >= amount ? amount : size - pos;
    str[size - amount] = '\0';//doi '\0' vao
    return amount;
}





void strUpr(char str[]){
    for(int i = 0; i <= strLen(str) - 1; i++){
        if(str[i] >= 97 && str[i] <= 122){
            str[i] -= 32;
        }
    }
}


int strLen(char str[]){
    int size = 0;
    while(str[size] != '\0') size++;
    return size;
}
