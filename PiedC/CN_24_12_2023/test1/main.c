#include <stdio.h>
#include <stdlib.h>
//Viết 1 chương trình nhận vào 2 số num1, num2, tìm UCLN của 2 số đó và in ra màn hình ( 3p
int main()
{
    int num1, num2;
    printf("\nNhap num1: ");
    scanf("%d", &num1);

    printf("\nNhap num2:");
    scanf("%d", &num2);
    int solon;
    int ketqua;
    if(num1 > num2){
        solon = num1;
        for(int i = solon; i >= 1; i -= 1){
            if(num1 % i == 0 && num2 % i == 0){
               ketqua = i;
               printf("Ket qua cua em la: %d", ketqua);
               return 0;
            }
        }
    }else if(num1 < num2){
        solon = num2;
        for(int i = solon; i >= 1; i -= 1){
            if(num1 % i == 0 && num2 % i == 0){
                ketqua = i;
                printf("Ket qua cua em la: %d", ketqua);
                return 0;
            }
        }
    }else if(num1 == num2){
        printf("Ket qua cua em la: 1");
    }
    return 0;
}
