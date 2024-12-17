#include <stdio.h>
#include <stdlib.h>
//2. tim tong lon nhat cua day so lien tiep trong mang
//1 3 -5 2 7 6 -2 4 -3 1 kqua: 17
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int maxArray(int arr[], int size);

int main()
{
    int arrMain[MAX];
    int sizeMain;
    int start = 0;
    int end;
    inputArray(arrMain, &sizeMain);
    printf("\nMang vua nhap la: ");
    outputArray(arrMain, sizeMain);
    printf("\n%d",maxArray(arrMain, sizeMain));

    return 0;
}

//1 3 -5 2 7 6 -2 4 -3 1 kqua: 17
int maxArray(int arr[],int size){
    int start, end;
    int max = arr[0];

    for(int i = 0; i < size - 1;i++){
        int sum = arr[i];
        int count = i+1;
        while(count < size){
            sum += arr[count];
            if(max < sum){
                max= sum;
                start = i;
                end = count;
            }
            count++;
        }
    }
    return max;
}





void inputArray(int arr[], int* size){
    printf("\nNhap size di: ");
    scanf("%d", size);

    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap value cua arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
