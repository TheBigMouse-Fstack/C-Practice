#include <stdio.h>
#include <stdlib.h>
void strUpr(char str[]);
int strLen(char str[]);
void removeDup(char str[]);
void spliceStr(char str[], int pos, int amount);
void removeKey(char str[], char key);
int strCmp(char str1[], char str2[]);


int main()
{
    char str1[100] = "abbcdddeee";
    char str2[100] = "abbc";
    int res = strCmp(str1, str2);
    printf("\nRes ne %d", res);

    return 0;
}
int strCmp(char str1[], char str2[]){
    int size1 = strLen(str1);
    int size2 = strLen(str2);
    int smallSize = size1;
    if(size1 > size2){
        smallSize = size2;
    }
    for(int i = 0; i <= smallSize - 1; i++){
        if(str1[i] > str2[i]){
            return 1;
        }else if(str1[i] < str2[i]){
            return -1;
        }
    }
    if(size1 == size2){
        return 0;
    }else if(size1 == smallSize){
        return -1;
    }else if(size2 == smallSize){
        return 1;
    }
}

void removeKey(char str[], char key){
    int size = strLen(str);
    int count = 0;
    char tmp[100];
    int sizeTmp = 0;
    for(int i = 0; i <= size - 1; i++){
        if(str[i] != key){
            tmp[sizeTmp] = str[i];
            sizeTmp++;
        }else{
            count++;
        }
    }
    for(int i = 0; i <= sizeTmp - 1; i++){
        str[i] = tmp[i];
    }
    str[size - count] = '\0';

}
void spliceStr(char str[], int pos, int amount){
    int size = strLen(str);
        //abbcdddeee
        //0123456789
    for(int i = pos; i <= size - 1; i++){
        str[i] = str[i + amount];
    }
    str[size - amount] = '\0';
}



void removeDup(char str[]){
    //abbcdddeeefeg
    int size = strLen(str);
    char tmp[100];
    int sizeTmp = 0;
    for(int i = 0; i <= size - 1; i++){
        int j = 0;
        for(j = 0; j <= sizeTmp - 1; j++){
            if(str[i] == tmp[j]) break;
        }
        if(j == sizeTmp){
            tmp[sizeTmp] = str[i];
            sizeTmp++;
        }
    }
    for(int i = 0; i <= size - 1; i++){
        str[i] = tmp[i];
    }
    str[sizeTmp] = '\0';
}

void strUpr(char str[]){
    for(int i = 0; i<= strLen(str) - 1; i++){
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

//btvn
//strCmp: so sánh 2 chuỗi với nhau

//strUpr: uperCase
//      f(str)
//      str: 'f88 NhA Cai dEn tU chAu Au'
//           'F88 NHA CAI DEN TU CHAU AU'
//RemoveDup:
//      xóa các ký tự trùng trong chuỗi
//spliceStr:
//      f(str, pos, amount)
//      từ vị trí xóa số lượng amount
//RemoveKey:
//      f(str, key)
//      xóa hết các key trong str
//***option
//strInStr: tìm chuỗi trong chuỗi
//delSubInStr: xóa sub trong str
