#include <stdio.h>
#include <stdlib.h>
/*
*Bài 1: ArrayInArray:
        tìm mảng trong mảng
        hàm này nhận vào arr[], key[]
        tìm mảng key có tồn tại trong mảng arr hay không
        nếu có return index
        nếu không return -1
    arr  : 2 3 2 1 3 2 5 2 2
    index: 0 1 2 3 4 5 6 7 8
    key  : 2 5
    return 5


*/
void inputarray(int array[], int*size);
void outputarray(int array[], int size);
int findarrayindex(int array[], int size, int key[], int*sizekey);

int main()
{
    int arrmain[100];
    int sizemain;
    int key[100];
    int sizekey;

    inputarray(arrmain,&sizemain);
    printf("Mang la: ");
    outputarray(arrmain, sizemain);

    int pos = findarrayindex(arrmain,sizemain,key,&sizekey);
    if(pos == -1){
        printf("\nKo tim thay");
    }else{
        printf("\ntim thay o vi tri %d",pos);
    }

    return 0;
}
void inputarray(int array[], int*size){
    printf("\nNhap kich thuoc : ");
    scanf("%d", size);
    for(int i = 0 ; i<= *size - 1; i++){
        printf("\nNhap array[%d]: ",i);
        scanf("%d",&array[i]);
    }
}
void outputarray(int array[], int size){
    for(int i = 0 ; i<= size -1 ;i++){
        printf("%4d",array[i]);
    }
}
int findarrayindex(int array[], int size, int key[], int*sizekey){
    printf("\nNhap kich thuoc key: ");
    scanf("%d",sizekey);
    for(int i = 0 ; i<= *sizekey - 1;i++){
        printf("\nNhap key[%d]: ",i);
        scanf("%d",&key[i]);
    }
    for(int i = 0 ; i<= size - 1;i++){
            if(key[a] == array[b]){
                int count = 0;
                while(1){
                    if(key[a] == array[b]){
                        if(key[a] == array[b] && a == *sizekey - 1){
                            return b - count;
                        }
                            a++;
                            b++;
                            count++;
                    }else{
                        break;
                    }
                }
                a = a - count;
                b = b - count;
                count = 0;
            }
        }
    return -1;
}
