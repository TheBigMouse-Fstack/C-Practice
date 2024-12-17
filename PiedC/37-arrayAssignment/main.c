#include <stdio.h>
#include <stdlib.h>
//37-arrayAssignment
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
void cpyArray(int arrS[], int* sizeS,
              int arrM[], int sizeM);
void cpyArrayV2(int arrS[], int* sizeS,
              int arrM[], int sizeM);
void concatArrayV2(int arrS[], int* sizeS,
              int arrM[], int sizeM);
int main()
{
    int arr1[100] = {3, 1, 2, 7, 5};
    int size1 = 5;
    int arr2[100] = {2, 6, 7};
    int size2 = 3;

    //muốn arr1 cpy arr2
    printf("\nMang truoc copy: ");
    printf("\nArr1: ");
    outputArray(arr1, size1);
    printf("\nArr2: ");
    outputArray(arr2, size2);
    concatArrayV2(arr1, &size1, arr2, size2);
    printf("\nMang sau copy: ");
    printf("\nArr1: ");
    outputArray(arr1, size1);
    printf("\nArr2: ");
    outputArray(arr2, size2);


    return 0;
}
void concatArrayV2(int arrS[], int* sizeS, int arrM[], int sizeM){
    //nhét arrM vào arrS
    for(int i = 0; i <= sizeM - 1; i++){
        arrS[*sizeS] = arrM[i];//nhét
        (*sizeS)++;
    }
}
void cpyArrayV2(int arrS[], int* sizeS, int arrM[], int sizeM){
    //xóa thằng đi copy
    *sizeS = 0;
    for(int i = 0; i <= sizeM - 1; i++){
        arrS[*sizeS] = arrM[i];//nhét
        (*sizeS)++;
    }
}



void cpyArray(int arrS[], int* sizeS, int arrM[], int sizeM){
    //duyệt mảng muốn copy
    for(int i = 0; i <= sizeM - 1; i++){
        arrS[i] = arrM[i];
    }
    *sizeS = sizeM;
}


void inputArray(int arr[], int* size){
    printf("\nNhap kich thuoc : ");
    scanf("%d", size);

    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap value vao arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
}
/*37-arrayAssignment: gán mảng | dán mảng
    cpyArray: sao chép mảng
        copy mảng thì như nào ?
        b = 5
        a = 10
        a = b => pass by value: truyền tham trị
              => mượn giá trị để tham khảo: copy
        a sao chép của b
            b người bị copy: giữ nguyên giá trị
            a người đi copy: thay đổi giá trị


    concatArray: nối mảng
        v2: dùng kĩ thuật nhét
        v1(bài tập về nhà): hàm nhận vào mang1, mang2, mang3
        sau khi hàm xử lí: mang1 không đổi
                           mang2 không đổi
                           mang3 sẽ thành mang1 + mang2
                b1: xóa mảng 3
                b2: nhét mảng 1 vào mảng 3
                b3: nhét mảng 2 vào mảng 3
    reverseArray: đảo ngược mảng (cưa đôi mảng ra để làm)
        c1: nhét theo chiều ngược
        c2: swap đối xứng với trục giữa

    dán đối xứng | nhét | swap đối xứng | duyệt ngược
*/













