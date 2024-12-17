#include <stdio.h>
#include <stdlib.h>
//nhap 1010010101010110101010
//dem bao nhieu 101 trong mang
void input(int array[],int*size);
void output(int array[],int size);
int main()
{
    int arraymain[100];
    int sizemain;
    input(arraymain,&sizemain);
    printf("mang la: ");
    output(arraymain,sizemain);

    return 0;
}
void input(int array[],int*size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0 ; i = *size -1;i++){
        printf("\nnhap array[%d]: ");
        scanf("%d"array[i]);
    }
}
void output(int array[],int size){
    for(int i = 0  ;i <= size - 1;i++){
        printf("%4d",array[i]);
    }
}
