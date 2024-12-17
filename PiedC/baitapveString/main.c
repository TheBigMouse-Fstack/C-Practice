#include <stdio.h>
#include <stdlib.h>
int strLen(char str[]);
void validName(char str[]);
void revWordInStr(char str[]);
int main()
{
    char str[] = " lE hO dIeP ";

    printf("Chuoi truoc khi chuan hoa: %s\n", str);
    revWordInStr(str);
    printf("Chuoi sau khi chuan hoa: %s\n", str);
    return 0;
}
void revWordInStr(char str[]) {
    int size = strlen(str);
    for (int i = 0; i < size / 2; i++) {
        char tmp = str[i];
        str[i] = str[size - 1 - i];
        str[size - 1 - i] = tmp;
    }
    int start = 0;
    for (int end = 0; end <= size; end++) {
        if (str[end] == ' ' || str[end] == '\0') {
            int left = start;
            int right = end - 1;
            while (left < right) {
                char tmp = str[left];
                str[left] = str[right];
                str[right] = tmp;
                left++;
                right--;
            }
            start = end + 1;
        }
    }
}



int strLen(char str[]){
    int size = 0;
    while(str[size] != '\0') size++;
    return size;
}
void validName(char str[]) {
    int length = strlen(str);
    int isWordStart = 1;
    for (int i = 0; i < length; i++) {
        if(str[i] == ' ') {
            isWordStart = 1;
        }else{
            if(isWordStart){
                str[i] = toupper(str[i]);
                isWordStart = 0;
            }else{
                str[i] = tolower(str[i]);
            }
        }
    }
}

//ValidName
//  f(str)
//  str: " lE hO dIeP "  -> "Le Ho Diep"

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
