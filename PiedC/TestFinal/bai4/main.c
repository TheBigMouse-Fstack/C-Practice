#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void inputKeyToString(char str[], int pos, char key);
int main()
{
    char str[100] = "xin chao ban";
    inputKeyToString(str, -1, 'e');
    printf("\nString ne: %s", str);

    return 0;
}
void inputKeyToString(char str[], int pos, char key){
    if(pos < 0 || pos >= strlen(str)) return;
    int size = strlen(str) + 1;
    for(int i = size - 1; i >= pos; i--){
        str[i] = str[i - 1];
    }
    str[pos] = key;
    str[size] = '\0';
}
