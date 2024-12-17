#include <stdio.h>
#include <stdlib.h>
// tim tich lon nhat cua 2 so bat ki trong mang
// tim tong lon nhat day con lien tiep trong mang
const int MAX = 100;
void inputarr ( int arr[], int* size);
void outputarr(int arr[], int size);
int highestmulttarr(int arr[], int size);
int main()
{
    int arrmain[MAX];
    int sizemain;
    inputarr(arrmain, &sizemain);
    printf("\nMang la: ");
    outputarr(arrmain, sizemain);
    printf("\nmax la %d", highestmulttarr(arrmain,sizemain));
    return 0;
}
void inputarr ( int arr[], int* size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0; i<= *size - 1; i++){
        printf("\nNhap arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }
}
void outputarr(int arr[], int size){
    for(int i = 0; i<= size - 1; i++){
            printf("%5d", arr[i]);
        }
}
int highestmulttarr(int arr[], int size){
    int max = 0;
    int mult = 1;
    for(int n = 0 ; n <= size - 1 ; n++){
        mult = arr[n];
        for(int i = 0 ; i <= size - 1; i++){
            if(mult != arr[i]){
                if(mult*arr[i] > max){
                    max = mult * arr[i];
                }
            }

        }
    }
    return max;
}
knate
