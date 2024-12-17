#include <stdio.h>
#include <stdlib.h>
//43-deleteSubInArray
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int splice(int arr[], int* size, int pos, int amount);
int arrInArr(int arr[], int size, int arrS[], int sizeS);
int arrInArrV2(int arr[], int size, int arrS[], int sizeS);
int deleteSubInArr(int arr[], int* size, int arrS[], int sizeS);
int sort(int arr[], int size);
int main()
{
    int arr[] = {2, 1, 3, 1, 3, 5, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int arrS[] = {1, 3, 5};
    int sizeS = sizeof(arrS) / sizeof(arrS[0]);

    //xai ham
    //splice(arr, &size, 3, 4);
    //int result = arrInArrV2(arr, size, arrS, sizeS);
    //in ket qua
    //printf("\nRes: %d", result);
    deleteSubInArr(arr, &size, arrS, sizeS);
    //sort(arr, size);
    printf("\nMang ne: ");
    outputArray(arr, size);
    return 0;
}
int sort(int arr[], int size){
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            if(arr[i] > arr[j]){
                //swap
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}










int deleteSubInArr(int arr[], int* size, int arrS[], int sizeS){
    while(splice(arr, size, arrInArrV2(arr, *size, arrS, sizeS), sizeS));//anti thay THONGNT
}







int arrInArrV2(int arr[], int size, int arrS[], int sizeS){
    int check = 0;
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == arrS[check]){
            if(check == sizeS - 1) return i - check;
            check++;
        }else{
            i -= check;
            check = 0;
        }
    }
    return -1;
}
/*    int check = 0;
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == arrS[check]){
            if(check == sizeS - 1) return i - check;
            check++;
        }else{
            i -= check;
            check = 0;
        }
    }
    return -1;

*/






    /*int j = 0;
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == arr[j]){
            if(j == size - 1) return i - j;
            j++;
        }else{
            i -= j;
            j = 0;
        }
    }
    return -1;*/





int arrInArr(int arr[], int size, int arrS[], int sizeS){
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == arrS[0]){
            //duyet mang arrS de so san[\'
            for(int j = 0; j <= sizeS - 1; j++){
                if(arr[i + j] != arrS[j]) break;
                else{
                    if(j == sizeS - 1) return i;
                }
            }
        }
    }
    return -1;
    /*    if(pos < 0 || pos >= *size) return 0;
    for(int i = pos; i <= *size - 1; i++){
        arr[i] = arr[i + amount];
    }
    (*size) -= amount;
    return 1;*/
}








int splice(int arr[], int* size, int pos, int amount){
    if(pos < 0 || pos >= *size) return 0;
    for(int i = pos; i <= *size - 1; i++){
        arr[i] = arr[i + amount];
    }
    (*size) -= amount;
    return 1;
}
void inputArray(int arr[], int* size){
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap gia tri arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
