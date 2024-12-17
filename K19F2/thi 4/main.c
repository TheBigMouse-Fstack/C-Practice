#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int find(char str[],char key);
int main()
{
    char str[100];
    printf("\nNhap: ");
    gets(str);
    char key;
    printf("\nNhap key: ");
    scanf("%c",&key);
    printf("%d",find(str,key));
    return 0;
}
int find(char str[],char key){
    for(int i = 0 ; i<= strlen(str) - 1;i++){
        if(str[i] == key) return i;
    }
    return -1;
}
