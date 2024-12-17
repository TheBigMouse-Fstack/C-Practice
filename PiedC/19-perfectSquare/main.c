#include <stdio.h>
#include <stdlib.h>
//19-perfectSquare
//Nhap vao so nguyen n
//Kiem tra so nguyen do co phai la so chinh phuong
//So chinh phuong la so neu can 2 duoc so nguyen
int main()
{

    int n;
    char buffer;// bien nay hung phan du trong luc nhap

    do{
        printf("\nNhap vo di be iu: ");
        scanf("%d", &n);
        scanf("%c", &buffer);//hung phan du
        fflush(stdin);//xoa cac phan du con lai
        if(buffer != 10 || n < 0){
            printf("\nNhap so nguyen duong nha kiki!");
        }
    }while(buffer != 10 || n < 0);
    //sqrt() cho ra kieu so longfloat || double
    int can = sqrt(n);
    printf(can == sqrt(n) ? "\nNo la scp": "\nDeo phai scp");
    return 0;
/*
if(sqrt(n) == (int)sqrt(n)){
    printf("\nNo la scp");
}else{
    printf("\nNo 0 phai scp");
}

*/

    /*
    hung = sqrt(n);
    int phanNguyen = n / hung;
    if(phanNguyen == hung){
        printf("\nNo la scp");
        return 0;
    }
    printf("\nNo deo phai so chinh phuong");
    */
    /*
    for(int i = 0; pow(i, 2) <= n; i++){
        if(pow(i, 2) == n){
            printf("\nNo la so chinh phuong");
            return 0;
        }
    }
    printf("\nNo deo phai so chinh phuong");//cach thong dung
    */
}
