#include <stdio.h>
#include <stdlib.h>
void strUpr(char str[]);
int strLen(char str[]);
int splice(char str[],int pos , int amount);
int find(char str[]);
int removekey(char str[],char key);
void deleteduplicate (char str[]);
int main()
{
    char str[100] = "conchimcucuucon";
    deleteduplicate(str);
    //strUpr(str);
    printf("\n%s",str);
    return 0;
}
void strUpr(char str[]){
    for(int i = 0 ; i<= strLen(str) - 1; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
    }
}
int strLen(char str[]){
    int i =0;
    while(str[i] != '\0') i++;
    return i;
}
int splice(char str[],int pos , int amount){
    int size = strLen(str);
    if(pos > size || pos < 0) return 0;
    for(int i = pos ; i <= size  - 2;i++){
        str[i] = str[i+amount];
    }
    if(size - pos < amount){
        str[size -=(size - pos)] = '\0';
    }else{
        str[size -= amount] = '\0';
    }
    return 1;
}
int find(char str[]){
    int size = strLen(str);
    for(int i = 0 ; i<= size - 1;i++){
        for(int j = i+1; j<= size - 1;j++){
            if(str[i] == str[j]){
                return j;
            }
        }
    }
    return -1;
}
int removekey(char str[],char key){
    int count = 0;
    for(int i = 0; i<= strLen(str) - 1;i++){
        if(str[i] == key){
            splice(str,i,1);
            i--;
            count++;
        }
    }
    return count;
}
void deleteduplicate (char str[]){
    while(splice(str,find(str),1));
}

