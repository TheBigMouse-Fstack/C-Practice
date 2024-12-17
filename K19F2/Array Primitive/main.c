#include <stdio.h>
#include <stdlib.h>
//hang so: ten:viethoa,danh tu
//32-inputOutputArray
int main()
{
     int array[100]; // tao ra 100 bien
     int size;//kich thuoc gia
     printf("\nNhap kich thuoc ma ba muon di: ");
     scanf("%d", &size);

     for(int i = 0; i <= size - 1;i++){
        printf("\nNhap array[%d]: ", i);
        scanf("%d", &array[i]);

     }
     printf("\nMang vua nhap ne: ");
     for(int i = 0; i<= size - 1;i++){
        printf("%5d", array[i]);
     }

    return 0;
}
