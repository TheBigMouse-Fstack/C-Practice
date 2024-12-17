#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void deleteKey(char str[], char key);
int main()
{
    char str[100] = "anBanhKemAnVui";
    deleteKey(str, 'K');
    printf("\nString ne: %s", str);
    return 0;
}
void deleteKey(char str[], char key){
    int size = strlen(str);
    int sizeTmp = 0;
    char tmp[100] = "";
    for(int i = 0; i <= size - 1; i++){
        if(str[i] != key){
            tmp[sizeTmp] = str[i];
            sizeTmp++;
        }
    }
    tmp[sizeTmp] = '\0';
    strcpy(str, tmp);
}
