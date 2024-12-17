#include <stdio.h>
#include <stdlib.h>
// viết hàm xóa toàn bộ mảng con trong mảng cha, nếu có thì phải xóa đến khi không còn
void inputarray(int array[],int*size);
void outputarray(int array[],int size);
int find(int array[], int size , int arrays[], int sizes);
void deletearray(int array[], int * size, int count , int pos);
int main()
{
    int arrmain[100];
    int sizemain;
    inputarray(arrmain,&sizemain);
    int arrsub[100];
    int sizesub;
    inputarray(arrsub,&sizesub);
    deletearrayinarray(arrmain,&sizemain,arrsub,sizesub);
    outputarray(arrmain,sizemain);

    return 0;
}
void inputarray(int array[],int*size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0 ; i<= *size - 1;i++){
        printf("\nNhap array[%d]: ",i);
        scanf("%d",&array[i]);
    }
}
void outputarray(int array[],int size){
    for(int i = 0 ; i<= size - 1;i++){
        printf("%4d", array[i]);
    }
}
int find(int array[], int size , int arrays[], int sizes){
    for(int i = 0 ; i<= size - 1;i++){
        int flag = 1;
        int count = i;
        for(int j = 0 ; j<= sizes - 1; j++){
           if(arrays[j] != array[count]){
                flag = 0;
                break;
           }
           count++;
        }
        if(flag) return i;
    }
    return -1;
}
void deletearray(int array[], int * size, int count , int pos){
    for(int i = pos ; i<= *size - 1; i++){
        array[i] = array[i + count];
    }
    *size = *size - count;
}
void deletearrayinarray(int array[], int * size , int arrays[],int sizes){
    while(!(find(array, *size, arrays, sizes) == -1)){
        int pos = find(array, *size, arrays, sizes);
        deletearray(array, size, sizes, pos);
    }
}

int deletearray1(int array[], int * size, int count , int pos){
    if(pos < 0 || pos > *size - count ) return 0;
    for(int i = pos ; i<= *size - 1; i++){
        array[i] = array[i + count];
    }
    *size = *size - count;
    return 1;
}
*/

