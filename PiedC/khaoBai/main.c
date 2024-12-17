#include <stdio.h>
#include <stdlib.h>
//viet ham xoa het cac phan tu co gia tri la key trong mang
void deleteKeyInArray(int arr[], int* size, int key);
void outputArray(int arr[], int size);
void removeDuplicates(int arr[], int *size);
void reverseArray(int arr[], int size);
int main()
{
    int arr[] = {2, 1, 3, 7, 0, 1, 9, 0, 2, 5, 7};
    int size = sizeof(arr) /sizeof(arr[0]);
    //removeDuplicates(arr, &size);
    reverseArray(arr, size);
    outputArray(arr, size);
    return 0;
}
void reverseArray(int arr[], int size){
    for(int i = 0; i <= size/2 - 1; i++){
        int tmp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = tmp;
    }
}

void removeDuplicates(int arr[], int *size){
    int newSize = 0;
    for(int i = 0; i <= *size - 1; i++){
        int isDup = 1;
        for(int j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                isDup = 0;
                break;
            }
        }
        if(isDup){
            arr[newSize++] = arr[i];
        }
    }
    *size = newSize;
}


void deleteKeyInArray(int arr[], int* size, int key){
    int tmp[100];
    int sizeTmp = 0;
    for(int i = 0; i <= *size - 1; i++){
        if(key != arr[i]){
            tmp[sizeTmp] = arr[i];
            sizeTmp++;
        }
    }
    for(int i = 0; i <= sizeTmp - 1; i++){
        arr[i] = tmp[i];
    }
    *size = sizeTmp;
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
/*    int newSize = 0; // Kích thước mới của mảng
    for (int i = 0; i <= *size - 1; i++) {
        int isUnique = 1; // Biến kiểm tra xem phần tử hiện tại là duy nhất hay không
        // Kiểm tra phần tử hiện tại có trùng với bất kỳ phần tử nào trước đó không
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0; // Phần tử không duy nhất
                break;
            }
        }
        // Nếu phần tử hiện tại là duy nhất, thêm vào mảng mới
        if (isUnique) {
            arr[newSize++] = arr[i];
        }
    }
    *size = newSize; // Cập nhật kích thước của mảng*/
