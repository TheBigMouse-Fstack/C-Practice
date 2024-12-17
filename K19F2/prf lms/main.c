#include <stdio.h>
#include <stdlib.h>

/*Write a program in C language to input a one-dimensional array of marks (>=0 and <=100) and do the following tasks:
0. Print out the list;
1. Find maximum marks;
2. Find marks that are greater than or equal to the average of all the marks;
3. Insert a mark into the array;
4. Delete a mark from the array;
5. Sort the array (ascending order)
6. Input two float numbers a and b (a<b). Show marks that are greater than or equal to a and less than or equal to b.

Demo output:

Suppose that I have an array of marks, such that: 35 67 50 67
1. (1, 67), (3, 67). 1 is an index of 67 in the array, the same as (3, 67)
2. (1, 67), (3, 67).
…
6. Let a=45 and b=55, so the output is (50, 2).
*/
void inputarray(int array[], int*size,char a);
void outputarray(int array[], int size);
void findmaximummarks( int array[], int size);
int main()
{
    int arrmain[100];
    int sizemain;
    char a;
    inputarray(arrmain,&sizemain,a);
    printf("---------------------------------------------------------------menu---------------------------------------------------");
    printf("0. Print out the list");
    printf("1. Find maximum marks");
    printf("2. Find marks that are greater than or equal to the average of all the marks");
    printf("3. Insert a mark into the array");
    printf("4. Delete a mark from the array");
    printf("5. Sort the array (ascending order)");
    printf("6. Input two float numbers a and b (a<b). Show marks that are greater than or equal to a and less than or equal to b.");
    printf("-----------------------------------------------------------------------------------------------------------------------");
    switch(7)
    {
    case 0:
        outputarray(arrmain,sizemain);
        break;
    case 1:
        findmaximummarks(arrmain,sizemain);
    }
    return 0;
}
void inputarray(int array[], int*size,char a){
    do{
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    scanf("%c",&a);
    fflush(stdin);
    if(*size < 0 || *size > 100 || a != 10){
        printf("\nNhap lai");
    }
    }while(*size < 0 || *size > 100 || a != 10);
    for(int i = 0 ; i<= *size;i++){
        do{
            printf("\nNhap array[%d]: ",i);
            scanf("%d",&array[i]);
            scanf("%c",&a);
            fflush(stdin);
            if(*size < 0 || *size > 100 || a != 10){
                printf("\nNhap lai");
            }
        }while(*size < 0 || *size > 100 || a != 10);
    }
}
void outputarray(int array[], int size){
    printf("\nMang da nhap: ");
    for(int i = 0 ; i<= size -1;i++){
        printf("%d",array[i]);
    }
}
void findmaximummarks( int array[], int size){
    int max = 0;
    for(int i = 0 ; i<= size - 1;i++){
        if(max < array[i]){
            max = array[i];
        }
    }
    printf("\nMAX:%d",max);
}

