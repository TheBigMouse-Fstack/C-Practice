#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int find(char str[],char key);
int main()
{
    char str[100]= {"xin chao ban"};
    printf("%d",find(str,'c'));
    return 0;
}
int find(char str[],char key){
    for(int i = 0 ; i<= strlen(str) -1;i++){
        if(str[i] == key) return i;
    }
    return -1;
}
