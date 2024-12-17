#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
//inputArray: ham co nhiem vu nhap gia tri trong mang
void inputArray(int array[], int* size);
//ten cua mang la dia chi dau tien cua bang VD: V => &V[0] => 6000
//V[2] => 6000 + (4 x 2) = 6008
//mang la mot con tro dac biet, truy cap vao vung nho bang dau []

//outputArray: ham in ra cac phan tu trong mang
void outputArray(int array[], int size);
//sumElementInArray: tinh tong cac phan tu trong mang
int sumElementInArray(int array[], int size);
int main()
{
    int arrMain[MAX];//tao ra 100 bien co ten la arrMain
    int sizeMain = 0;//kich thuoc gia
    //
    inputArray(arrMain, &sizeMain);//int array[] = arrMain = &arrMain[0]; pass by references

    printf("\nMang vua nhap ne: ");
    outputArray(arrMain, sizeMain);
    printf("\nTong cua mang vua nhap la: %d", sumElementInArray(arrMain, sizeMain));
    return 0;
}
int sumElementInArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        sum += array[i];
    }
    return sum;
}

void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}


void inputArray(int array[], int* size){
    printf("\nNhap kich thuoc: ");//size
    scanf("%d", size);

    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap vo array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
//trong ham neu la con tro
/*
    dia chi => ten
    gia tri => *ten
*/
