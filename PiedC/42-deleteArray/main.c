#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int removeKeyInArray(int arr[], int* size, int key);
void deleteElementByPos(int arr[], int* size, int pos);
int removeKeyInArrayV2(int arr[], int* size, int key);
int removeDuplicate(int arr[], int* size);
int search(int arr[], int size, int key);
int removeDuplicateV2(int arr[], int* size);
int insertArrayIntoArray(int arr[], int* size, int sub[], int sizeSub, int pos);



int main()
{
    int arr[] = {2, 4, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int arrS[] = {1, 3, 5};
    int sizeS = sizeof(arr) / sizeof(arr[0]);
    //int amount = removeKeyInArrayV2(arr, &size, 3);
    //int amount = removeDuplicateV2(arr, &size);
    //printf("\nAmount: %d", amount);
    insertArrayIntoArray(arr, &size, arrS, sizeS, 2);
    printf("\nMang ne: ");
    outputArray(arr, size);
    return 0;
}
int insertArrayIntoArray(int arr[], int* size, int sub[], int sizeSub, int pos){
    for(int i = *size - 1; i >= pos; i--){
        arr[i + sizeSub] = arr[i];
    }
    (*size) += sizeSub;
    for(int i = 0; i <= sizeSub - 1; i++){
        arr[pos + i] = sub[i];
        /*
        arr[pos] = sub[i];
        pos++;
        */
    }
}







int removeDuplicateV2(int arr[], int* size){
    int count = 0;
    for(int i = 0; i <= *size - 2/* *size - 1 van duoc*/; i++){
        for(int j = i + 1; j <= *size - 1; j++){
            if(arr[i] == arr[j]){
                deleteElementByPos(arr, size, j);
                j--;//lui lay da
                count++;
            }
        }
    }
    return count;
}
int removeDuplicate(int arr[], int* size){
    int tmp[MAX];
    int sizeTmp = 0;
    int count = 0;
    //duyet mang arr
    for(int i = 0; i <= *size - 1; i++){
        if(search(tmp, sizeTmp, arr[i]) == -1){
            tmp[sizeTmp] = arr[i];
            sizeTmp++;
        }else{
            count++;
        }
    }
    for(int i = 0; i <= sizeTmp - 1; i++){
        arr[i] = tmp[i];
    }
    *size = sizeTmp;
    return count;
}
//ham tim kiem, duoc thi vi tri, khong duoc thi -1
int search(int arr[], int size, int key){
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int removeKeyInArrayV2(int arr[], int* size, int key){
    int count = 0;
    for(int i = 0; i <= *size - 1; i++){
        if(arr[i] == key){
            deleteElementByPos(arr, size, i);
            i--;//lui lay da tranh xoa hut
            count++;
        }
    }
    return count;
}
void deleteElementByPos(int arr[], int* size, int pos){
    //chua xu ly pos, size - 2 moi toi uu
    for(int i = pos; i <= *size - 1; i++){
        arr[i] = arr[i + 1];
    }
    (*size)--;
}
int removeKeyInArray(int arr[], int* size, int key){
    int tmp[MAX];
    int sizeTmp = 0;//tao mang tam la tmp
    int count = 0;
    //duyet mang array
    for(int i = 0; i <= *size - 1; i++){
        if(arr[i] != key){//neu phan tu khac key thi nhet
            tmp[sizeTmp] = arr[i];
            sizeTmp++;
        }else{
            count++;//neu la key thi chi dem
        }
    }
    for(int i = 0; i <= sizeTmp - 1; i++){
        arr[i] = tmp[i];//dap doi xung
    }
    *size = sizeTmp;//sao chep phai co tu trong
    return count;
}
void inputArray(int arr[], int* size){
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap gia tri vao arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
