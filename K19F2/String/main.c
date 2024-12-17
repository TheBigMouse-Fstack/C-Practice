#include <stdio.h>
#include <string.h>
void inputStringList(char strList[][100], int *size);
void outputStringList(char strList[][100, int size]);
int main() {
    char strList[100][100];
    int size = 0;
    int count;
    printf("\nNhap so luong chuoi: ");
    scanf("%d",&count);
    while(count>0){
    inputStringList(strList, &size);
    count--;
    }
    return 0;
}
void inputStringList(char strList[][100], int *size){
    char tmp[100] = "";
    printf("\nNhap ten sinh vien moi di: ");
    fflush(stdin);
    gets(tmp);
    strcpy(strList[*size],tmp);
    (*size)++;
}
void outputStringList(char strList[][100, int count]){
    for(int i = 0; i<= )
}
