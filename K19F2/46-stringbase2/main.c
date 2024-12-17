#include <stdio.h>
#include <stdlib.h>
int strlen(char str[]);
int charinstr(char str[], char ch);
void delcharinstr(char str[], int pos);
void insertcharinstr(char str[],char ch, int pos);

int main()
{
    char str[100] = "xinchaoban";
    char sub[100] = "cac";
    //printf("%d",charinstr(str,'c'));

    insertstrintostr(str,sub,7);

    printf("%s",str);
    return 0;
}
int strlen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
int charinstr(char str[], char ch){
    for(int i = 0 ; i<= strlen(str) - 1;i++){
        if(str[i] == ch){
            return i;
        }
    }
}
void delcharinstr(char str[], int pos){
    for(int i = pos  ; i<= strlen(str) - 1;i++){
        str[i] = str[i + 1];
    }
    str[strlen(str)]= '\0';
}
void insertcharinstr(char str[],char ch, int pos){
    for(int i = strlen(str) - 1  ; i >= pos ;i--){
        str[i + 1] = str[i];
    }
    str[pos]= ch;
    str[strlen(str)+1]= '\0';
}
void insertstrintostr(char str[], char sub[] , int pos){
    int sizestr = strlen(str);
    int sizesub = 0;
    for( int i = sizestr ; i >= pos ; i--){
        str[i + strlen(sub)] = str[i];
}
    for(int i = pos ; i< pos + strlen(sub);i++){
        str[i] = sub[sizesub];
        sizesub++;
    }
    str[sizestr + sizesub] = '\0';
}

