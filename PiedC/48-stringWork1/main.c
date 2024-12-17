#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int strLen(char str[]);
int splice(char str[], int pos, int amount);
void getAlphaBet(char str[]);
void removeVowel(char str[]);
void trim(char str[]);
int main()
{
    char str[100] = "    Xin   Chao     Ban       ";

    trim(str);
    printf("\nStr: %s", str);

    return 0;
}
void trim(char str[]){
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] == 32 && str[i + 1] == 32){
            splice(str, i, 1);
            i--;
        }
    }
    if(str[0] == 32){
        splice(str, 0, 1);
    }
    if(str[strlen(str) - 1] == 32){
        splice(str, strlen(str) - 1, 1);
    }
}
void removeVowel(char str[]){
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] == 'u' || str[i] == 'U' ||
           str[i] == 'a' || str[i] == 'A' ||
           str[i] == 'o' || str[i] == 'O' ||
           str[i] == 'i' || str[i] == 'I' ||
           str[i] == 'e' || str[i] == 'E'){
            splice(str, i, 1);
            i--;
           }
    }
}

void getAlphaBet(char str[]){
    for(int i = 0; i <= strlen(str) - 1; i++){

        if(!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))){
            //xoa
            splice(str, i, 1);
            i--;
        }
    }
}

int splice(char str[], int pos, int amount){
    int size = strLen(str);
    if(pos < 0 || pos >= size) return 0;
    for(int i = pos; i <= size - 1; i++){
        str[i] = str[i + amount];
    }
    amount = size - pos >= amount ? amount : size - pos;
    str[size - amount] = '\0';
    return 1;
}



int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
////1.getAlphaBet(10p)
//  f(str)
//  str = "7hel5lo9_hihi"
//->str = "hellohihi"

//2.RemoveVowel
// f(str)
//  str = "xinChaoEm"
//  => str = "xnChm"

//3.trim
//  xóa khoảng cách thừa
//  f(str)
//  str = "   xin   chao    ban    "
//  ->str = "xin chao ban"

    //strlen(str);//tinh do dai| size
    //strcpy(str, "Ahihi");
    //strcat(str, "Nhe");// noi
    //strlwr(str);//xinchaoban
    //strupr(str);//XINCHAOBAN
    //strcmp("ahihi", "Ahihi");//1
    //strcmpi("ahihi", "Ahihi");//0
    //strrev(str);//dao nguoc
