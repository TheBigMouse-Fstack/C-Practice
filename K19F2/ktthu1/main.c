#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*
int kiemtranguyento(int n);
int main()
{
    int n;
    printf("nNhap n: ");
    scanf("%d",&n);
    printf("%d",kiemtranguyento(n));
    return 0;
}
int kiemtranguyento(int n){
    if(n > 1){
        for(int i = 1 ; i < n ;i++){
            if(i%n == 0){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

void inputarr(int array[],int*size);
void outputarr(int array[],int size);
int splice(int array[],int*size,int pos,int amount);
int main()
{
    int arramain[100];
    int sizemain;
    inputarr(arramain,&sizemain);
    splice(arramain,&sizemain,2,2);
    outputarr(arramain,sizemain);
    return 0;
}
void inputarr(int array[],int*size){
    printf("\nNhap size: ");
    scanf("%d",size);
    for(int i = 0 ; i<= *size - 1;i++){
        printf("Array[%d]: ",i);
        scanf("%d",&array[i]);
    }
}
void outputarr(int array[],int size){
        for(int i = 0 ; i<= size - 1;i++){
        printf("%4d",array[i]);
    }
}
int splice(int array[],int *size,int pos,int amount){
    if(pos < 0 || pos > *size) return 0;
    for(int i = pos; i<= *size - 2;i++){
        array[i] = array[i + amount];
    }
    if(*size - pos >= amount) *size-= amount; return 1;
    if(*size - pos < amount) *size-= (*size - pos) ;  return 1;

}
int find(int array[],int size){

}

void inputarr(int array[],int*size);
void outputarr(int array[],int size);
int find(int array[],int size,int key);
int main()
{
    int arramain[100];
    int sizemain;
    int key;
    inputarr(arramain,&sizemain);
    printf("\nNhap key: ");
    scanf("%d",&key);
    printf("o vi tri: %d",find(arramain,sizemain,key));

    return 0;
}
void inputarr(int array[],int*size){
    printf("\nNhap size: ");
    scanf("%d",size);
    for(int i = 0 ; i<= *size - 1;i++){
        printf("Array[%d]: ",i);
        scanf("%d",&array[i]);
    }
}
void outputarr(int array[],int size){
        for(int i = 0 ; i<= size - 1;i++){
        printf("%4d",array[i]);
    }
}
int find(int array[],int size,int key){
    for(int i = 0; i<= size -1 ;i++){
        if(array[i] == key) return i;
    }
    return 0;
}

void inputstring(char str[]);
void outputstring(char str[]);
void add(char str[],int pos,int key);
int main()
{
    char str[100];
    char key;
    int pos;
    inputstring(str);
    outputstring(str);
    printf("\nNhap pos: ");
    scanf("%d",&pos);
    printf("Nhap key: ");
    fflush(stdin);
    scanf("%c",&key);
    add(str,pos,key);
    outputstring(str);
    return 0;
}
void inputstring(char str[]){
    printf("\nNhap chuoi: ");
    gets(str);
}
void outputstring(char str[]){
    printf("%s",str);
}
void add(char str[],int pos,int key){
    int size = strlen(str);
    for(int i = size ;i > pos;i--){
        str[i] = str[i-1];
    }
    str[pos] = key;
    str[size + 1]='\0';
}

void inputstring(char str[]);
void outputstring(char str[]);
int find(char str[],char key);
int splice(char str[],int pos, int amount);
void deletekey(char str[],char key);
int main()
{
    char str[100];
    char key;
    inputstring(str);
    outputstring(str);
    printf("\nNhap key: ");
    scanf("%c",&key);
    deletekey(str,key);
    outputstring(str);
    return 0;
}
void inputstring(char str[]){
    printf("\nNhap chuoi: ");
    gets(str);
}
void outputstring(char str[]){
    printf("%s",str);
}
int find(char str[],char key){
    int size = strlen(str);
    for(int i = 0; i<= size - 1 ;i++){
        if(str[i] == key) return i;
    }
    return -1;
}
int splice(char str[],int pos, int amount){
    int size = strlen(str);
    if(pos < 0 || pos > size) return 0;
    for(int i = pos; i<= size - 2;i++){
        str[i] = str[i + amount];
    }
    if(size - pos >= amount) str[size - amount] = '\0'; return 1;
    if(size - pos < amount) str[size -  (size - pos)] ='\0';  return 1;
}
void deletekey(char str[],char key){
    while(splice(str,find(str,key),1));
}
*/
void inputstring(char str[]);
void outputstring(char str[]);
int find(char str[], char strsub[], int *flag);
int splice(char str[], int pos, int amount);
int count(char str[], char strsub[], int *flag);

int main() {
    char str[100];
    char strsub[100];
    int flag = 0;
    inputstring(str);
    outputstring(str);
    inputstring(strsub);
    printf("%d", count(str, strsub, &flag));

    return 0;
}

void inputstring(char str[]) {
    printf("\nNhap chuoi: ");
    gets(str);
}

void outputstring(char str[]) {
    printf("%s", str);
}

int find(char str[], char strsub[], int *flag) {
    int size = strlen(str);
    int sizesub = strlen(strsub);
    int i = 0;
    for (int j = *flag; j <= size - 1; j++) {
        if (str[j] == strsub[i] && i == sizesub - 1) {
            *flag = j;
            return j;
        }
        if (str[j] == strsub[i]) {
            i++;
        }
    }
    return -1;
}
int count(char str[], char strsub[], int *flag) {
    int count = 0;
    while (find(str, strsub, flag) != -1) {
        count++;
        (*flag)++;
    }
    return count;
}
