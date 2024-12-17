#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find(char str[],char strs[]);
int main()
{
    char str[100] ={"anhAnanBanh"};
    char sub[100] ={"an"};
    printf("%d",find(str,sub));
    return 0;
}
int find(char str[],char strs[]){
    int check = 0;
    for(int i = 0 ; i<= strlen(str)-1;i++){
        if(str[i] == strs[check]){
            if(check == strlen(strs)-1) return i-=check;
            check++;
        }else{
            check = 0;
            i -= check;
        }
    }
    return -1;

}
