#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;//hang so//global: toan cuc
//ten: viet hoa het, danh tu, snake_case
//32-inputOutputArray
int main()
{
    int arr[MAX];//tao ra 100 bien co ten la arr
    int size;//kich thuoc gia
    //inputArray: nhap kich thuoc + nhap gia tri cho mang
    printf("\nKich thuoc ban muon la bao nhieu: ");
    scanf("%d", &size);

    for(int i = 0; i <= size - 1; i++){
        printf("\nNhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    
    //outputArray
    printf("\nMang vua nhap ne: ");
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
    }
    return 0;
}
