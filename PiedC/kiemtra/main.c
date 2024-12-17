#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Viết hàm nhận vào str(1 chuỗi - string),
//key(trong đó key là ký tự), Hàm có nhiệm vụ tìm vị trí phát hiện key trong chuỗi.
void revInString(char str[]);
int main()
{
    char str[100] = "anh yeu em";
    revInString(str);
    printf("%s", str);
    return 0;
}

void revInString(char str[]){
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
