#include <stdio.h>
#include <stdlib.h>
void input(int array[],int*size);
int summ(int a,int b, int array[],int size,int summain);
int main()
{
    int a,b;
    int arrmain[100];
    int sizemain;
    input(arrmain,&sizemain);
    printf("nNhap a: ");
    scanf("%d",&a);
    printf("nNhap b: ");
    scanf("%d",&b);
    int summain = 0;
    printf("%d",summ(a,b,arrmain,sizemain,summain));
    return 0;
}
void input(int array[],int*size){
    printf("\nNhap size: ");
    scanf("%d",size);
    for(int i = 0 ; i <= *size -1;i++){
        printf("\nNhap array[%d]: ",i);
        scanf("%d",&array[i]);
    }
}
int summ(int a,int b, int array[],int size,int sum){
    for(int i = 0 ; i<= size -1;i++){
        if(array[i] > a && array[i] <= b&& i!= size-1) sum+= array[i];
    }
    return sum;
}
