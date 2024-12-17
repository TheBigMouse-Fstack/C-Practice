#include <stdio.h>
#include <stdlib.h>

//B2.1:
//  xóa hết phần tử thỏa:
//  hàm nhận vào 1 mảng , key
//  x1g
//  => tìm phần tử trong mảng và delete
//  f([3,1,2,3,5,4,3,6], 3) => [1,2,5,4,6]
//  đánh dấu vòng lập(loop, while)
//   C1: hàm delete
//      duyệt arr tìm arr[i] == 3
//      gọi hàm delete xóa phần từ i1
//   C2: arr : [3,1,2,3,5,4,3,6]
//       tmp :
//      nhét arr vào tmp trừ arr[i] == 3
//      cpy tmp vào arr
/*
void inputarray (int array[], int*size);
void outputarray(int array[], int size);
void deletearray(int array[],int size,int key,int arraytmp[],int*sizetmp);
int main()
{
    int arrmain[100];
    int sizemain;
    int key;
    int arraytmp[100] = {1,2,3};
    int sizetmp = 3;
    inputarray(arrmain,&sizemain);
    printf("\nMang la: ");
    outputarray(arrmain,sizemain);
    printf("\nNhap key: ");
    scanf("%d",&key);
    deletearray(arrmain,sizemain,key,arraytmp,&sizetmp);
    printf("\nMang moi: ");
    outputarray(arraytmp,sizetmp);

    return 0;
}
void inputarray (int array[], int*size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0 ; i<= *size - 1; i++){
        printf("\nNhap array[%d]: ",i);
        scanf("%d",&array[i]);
    }
}
void outputarray(int array[], int size){
    for(int i = 0 ; i<= size - 1;i++){
        printf("%4d",array[i]);
    }
}
void deletearray(int array[],int size,int key,int arraytmp[],int*sizetmp){
    *sizetmp = 0;
    for(int i = 0 ; i<= size - 1;i++){
        if(array[i] != key){
            arraytmp[*sizetmp] = array[i];
            (*sizetmp)++;
        }
    }
    return 0;
}
*/
//B2.2:
//hàm nhận vào 1 mảng
//removeDuplicate: xóa trùng
//   => k còn phần tử nào trùng cả
//   2, 1, 3, 5, 2, 4, 5, 3 => 2 1 3 5 4
//  cách 1:
//  => tìm phần tử trong mảng, copyArray, Nhét
//  arr: 2, 1, 3, 5, 2, 4, 5, 3
//  tmp:
//  duyệt mảng arr xem arr[i]
//      có tồn tại trong tmp k
//      nếu arr[i] k tồn tại trong tmp
//        thì nhét arr[i] vào

//  cách 2:
//  => tìm kiếm, count, delete
//  arr: 2, 1, 3, 5, 2, 4, 5, 3

/*
void inputarray (int array[], int*size);
void outputarray(int array[], int size);
void removeDuplicat(int array[], int size,int tmp[],int*sizetmp);
int main()
{
    int arrmain[100];
    int sizemain;
    int arraytmp[100] = {1,2,3};
    int sizetmp = 3;
    inputarray(arrmain,&sizemain);
    printf("\nMang la: ");
    outputarray(arrmain,sizemain);
    removeDuplicat(arrmain,sizemain,arraytmp,&sizemain);
    printf("\nMnag moi la: ");
    outputarray(arraytmp,sizetmp);
    return 0;
}
void inputarray (int array[], int*size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0 ; i<= *size - 1; i++){
        printf("\nNhap array[%d]: ",i);
        scanf("%d",&array[i]);
    }
}
void outputarray(int array[], int size){
    for(int i = 0 ; i<= size - 1;i++){
        printf("%4d",array[i]);
    }
}
void removeDuplicat(int array[], int size,int arraytmp[],int*sizetmp){
    *sizetmp = 0;
    for(int a = 0 ; a<= size - 1;a++){
        for(int i = 0; i<= *sizetmp - 1;i++){
            if(array[a] == arraytmp[i]){
                arraytmp[*sizetmp] = array[a];
                (*sizetmp)++;
            }
        }
    }
}

*/
//B3:
//nhét 1 mảng khác vào 1 mảng gốc ở vị trí nào đó
//hàm nhận vào arrMain, arrSub, pos
//-> nhét sub vào main ở vị trí pos
//=> ứng dụng insert| nhét
    //arr: 2 4 6 8
    //i  : 0 1 2 3  size:4

    //sub: 1 3 5 size: 3  pos: 1
/*
void inputarray (int array[], int*size);
void outputarray(int array[], int size);
int inputarrayinarray(int array[],int*size,int pos,int arraysub[],int sizesub);
int main()
{
    int arrmain[100];
    int sizemain;
    int pos;
    int arraysub[100];
    int sizesub;

    inputarray(arrmain,&sizemain);
    printf("\nMang la: ");
    outputarray(arrmain,sizemain);

    inputarray(arraysub,&sizesub);
    printf("\nMang muon nhet la: ");
    outputarray(arraysub,sizesub);

    printf("\nNhap pos: ");
    scanf("%d",&pos);

    if(inputarrayinarray(arrmain,&sizemain,pos,arraysub,sizesub)){
        printf("\nMang moi la: ");
        outputarray(arrmain,sizemain);
    }else{
        printf("\nloi");
    }

    return 0;
}
void inputarray (int array[], int*size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0 ; i<= *size - 1; i++){
        printf("\nNhap array[%d]: ",i);
        scanf("%d",&array[i]);
    }
}
void outputarray(int array[], int size){
    for(int i = 0 ; i<= size - 1;i++){
        printf("%4d",array[i]);
    }
}
int inputarrayinarray(int array[],int*size,int pos,int arraysub[],int sizesub){
    if(pos > size || pos < 0) return 0;
    for(int a = 0 ; a<= sizesub - 1;a++){
        (*size)++;
        for(int i = *size - 1 ; i >= pos;i--){
        array[i]=array[i-1];
        }
        array[pos] = arraysub[a];
        pos++;
    }
}
*/
//*B4: xóa 1 mảng sub trong mảng arr
//  arrInArray
//  splice
//  f(arr, pos, amount);
//   trong mảng arr xóa từ pos số lượng amount pt
//  //hậu bối của bài delete
//  arr: 2 4 6 8 10   pos 1  amount: 2
//    i  0 1 2 3 4

void inputarray(int array[],int*size);
void outputarray(int array[],int size);
int deletearray(int array[],int*size,int pos,int amount);
int main()
{
    int arrmain[100];
    int sizemain;
    int pos;
    int amount;
    inputarray(arrmain,&sizemain);
    printf("\nMang la: ");
    outputarray(arrmain,sizemain);

    printf("\nNhap vi tri xoa: ");
    scanf("%d",&pos);

    printf("\nnhap so luong xoa: ");
    scanf("%d",&amount);
    if(deletearray(arrmain,&sizemain,pos,amount)){
        printf("\nMang xoa thanh cong: ");
        outputarray(arrmain,sizemain);
    }else{
        printf("\nVi tri ko hop le");
    }
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
    for(int i = 0  ; i <= size  - 1;i++){
        printf("%4d",array[i]);
    }
}
int deletearray(int array[],int*size,int pos,int amount){
    if(pos < 0 || pos > *size - 1) return 0;
    for(int i = pos ; i <= *size - 2 ; i++){
        array[i] = array[i + amount];
    }
    *size -= amount;
    return 1;
}
