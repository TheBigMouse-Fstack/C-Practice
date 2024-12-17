#include <stdio.h>
#include <stdlib.h>
int strLen(char str[]);
void strCpy(char str[], char sub[]);
void strCat(char str[], char sub[], char strsub[]);
void strdiv(char strsub[] , char str[], char sub[],int pos);
void restr(char str[],char strsub[]);

int main()
{
    char str[100] = "xinchaoban";
    char sub[100] = "abc";
    char strsub[100];

    //xai ham

    //strCpy(str,sub);
    //strCat(str,sub,strsub);
    //strdiv(strsub,str,sub,4);
    //restr(str,strsub);

    // in ket qua

    printf("\nStr ne: %s",str);
    printf("\nSub ne: %s",sub);
    printf("\nChuoi noi: %s",strsub);
    return 0;
}
int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
void strCpy(char str[], char sub[]){
    //1 xoa
    str[0]= '\0';
    int size = strlen(str);
    int sizesub = strlen(sub);
    for(int i = 0;i <= sizesub - 1;i++){
        str[size] = sub[i];
    size++;
}
    str[size] = '\0';
}
void strCat(char str[], char sub[],char strsub[]){
    int size = strlen(str);
    int sizesub = strlen(sub);
    for(int i = 0 ; i<= size - 1;i++){
        strsub[i] = str[i];
    }
    for(int i = 0 ; i<= sizesub - 1;i++){
        strsub[size + i] = sub[i];
    }
}
void strdiv(char strsub[] , char str[], char sub[],int pos){
    int size = strlen(str);
    int sizesub = strlen(sub);
    int sizestrsub = strLen(strsub);
    size = 0;
    sizesub = 0;
    for(int i = 0 ; i< pos;i++){
        str[size]= strsub[i];
        size++;
    }
    for(int i = pos ; i<= sizestrsub - 1;i++){
        sub[sizesub]= strsub[i];
        sizesub++;
    }
    sub[sizestrsub] = '\0';
    str[pos] = '\0';
}
void restr(char str[],char strsub[]){
    int size = strLen(str);
    size = 0;
    int sizestrsub = strLen(strsub);
    for(int i = sizestrsub - 1 ; i >= 0 ;i--){
        str[size] = strsub[i];
        size++;
    }
    str[sizestrsub] = '\0';
}
