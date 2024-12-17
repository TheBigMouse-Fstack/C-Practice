#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void palindrome(char str[]);
void reversePalin(char str[]);

int main()
{
    char str[100] = "hello";
    int a = str[0];
    int b = str[1];
    int c = str[2];
//CAY QUA @@
    for(int i = 0; i <= 2; i++){
        printf("\nMang ne: %d", str[i]);
    }
    return 0;
}
void reversePalin(char str[]){
    for(int k = 0; k <= strlen(str) - 1; k++){
        for(int t = k + 1; t <= strlen(str) - 1; t++){
            int a = str[k];
            int b = str[t];
            if(a < b){
                char temp = str[k];
                str[k] = str[t];
                str[t] = temp;
            }
        }
    }
}
void palindrome(char str[]){
    int size = strlen(str);
    char tmp[100] = "";
    int sizeTmp = 0;
    char res[100];
    for(int i = 0; i <= size - 1; i++){
        if(str[i] != 32){
            tmp[sizeTmp] = str[i];
            sizeTmp++;
        }
        int flag = 0;
        if(str[i] == 32 || i == strlen(str) - 1){
            tmp[sizeTmp] = '\0';
            for(int j = 0; j <= sizeTmp - 1; j++){
                    flag = 0;
                    printf("\nStr[j] ne: %c", str[j]);
                    printf("\nStr[sizeTmp - 1] ne: %c", str[sizeTmp - 1 - j]);
                if(str[j] != str[sizeTmp - 1 - j]){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                strcpy(res, tmp);
                strcpy(res, " ");
                strcpy(tmp, "");
                sizeTmp = 0;
                printf("\nTmp ne: %s", res);
            }else{
                for(int k = 0; k <= sizeTmp - 1; k++){
                    for(int t = k + 1; t <= sizeTmp - 1; t++){
                        int a = tmp[k];
                        int b = tmp[t];
                        if(a < b){
                            char temp = tmp[k];
                            tmp[k] = tmp[t];
                            tmp[t] = temp;
                        }
                    }
                }
            }

        }
    }
    printf("\nTmp ne: %s", tmp);
    res[strlen(res) - 1] = '\0';
    strcpy(str, res);
}
