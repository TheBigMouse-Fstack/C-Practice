#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find(char str[],char strsub[]);
int main()
{
    char str[100];
    printf("\nNhap: ");
    gets(str);
    char strsub[100];
    printf("\nNhap sub: ");
    gets(strsub);
    printf("%d",find(str,strsub));
    return 0;
}
int find(char str[],char strsub[]){
    int check = 0;
    for(int i = 0 ; i<= strlen(str) - 1 ;i++){
        if(strsub[check] == str[i] && check == strlen(strsub)-1) return i -=check;
        if(i>0 && strsub[check] != str[i]){
            check =0;
            i--;
        }else if(i == 0 && strsub[check] != str[i]){
            check =0;
        }
        if(strsub[check] == str[i]){
               check++;
            }
    }
    return -1;
}

