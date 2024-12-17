#include <stdio.h>
#include <stdlib.h>
//12-checkPrime
/*
nhap vao mot so nguyen
kiem tra xem so do co phai la so nguyen to khong]

so nguyen to la gi?
    la so chia het cho 1 va chinh no
--
so nguyen to phai tu 2 tro len
neu be hon 2 thi khong phai la so nguyen to
neu tu 2 tro len thi co the la so nguyen to
--
la so chi chia het cho 1 va chinh no
khong chia het cho bat cu so nao tu 2 den tiem can cua no
neu n la so nguyen to thi n se khong chia het cho bat cu so nao tu 2 den n-1
neu n chia het cho so nao trong doan tu 2 den n-1
ket luan no khong la so nguyen to

con neu chay tu 2 den n-1 ma n khong chia het cho thang nao thi n moi duoc xem la so ngguyen to
*/
/*int main()
{
    int number;
    printf("\nInput a number: ");
    scanf("%d", &number);
    if(number >= 2){.
        //xem thu number co chia cho so nao tu hai den tiem can khong
        //chay tu 2 den tiem can cua number
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                printf("\n%d is not prime", number);
                return 0;
            }
        }
        printf("\n%d is prime",number);
    }else{
        printf("\n%d is not prime.", number);
    }
    return 0;
}*/
int main()
{
    //Boolean: true(1) false(0)
    int number;
    int flag = 0;// flag = false
    printf("\nInput a number: ");
    scanf("%d", &number);
    if(number >= 2){
        //xem thu number co chia cho so nao tu hai den tiem can khong
        //chay tu 2 den tiem can cua number
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                flag = 1;//flag = true
            }
        }
        printf(flag ? "/nKhum phai Prime nha!" : "\nNo la Prime nha");
    }else{
        printf("\n%d is not prime.", number);
    }
    return 0;
}

