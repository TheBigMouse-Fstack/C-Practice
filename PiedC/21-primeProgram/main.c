#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int number, isPrime = 1;
    do{
        printf("\nNhap number di em ");
        scanf("%d", &number);
        if(number >= 2){
            for(int i = 2; i <= number - 1; i++){
                isPrime = 1;
                if(number % i == 0){
                    isPrime = 0;
                    break;
                }
            }
        }
        if(isPrime){
            printf("\nNo la Prime nha bae");
        }else if(isPrime == 0){
            printf("\nNo deo phai Prime nha");
        }
    }while(number != 0);
    */
    /*
    int sang[10001];
    for(int i = 2; i <= 10000; i++){
        sang[i] = 1;
    }
    for(int i = 2; i <= sqrt(10000); i++){
        if(sang[i] == 1){
            for(int j = 2*i; j <= 10000; j += i){
                sang[j] = 0;
            }
        }
    }
    int number = 1;
    do{
        char ch;
        do{
            printf("\nNhap di em iu: ");
            scanf("%d", &number);
            scanf("%c", &ch);//Hứng phần dư
            fflush(stdin);
            if(ch != 10){
                printf("\nDo ku know input integer!!!");
            }
        }while(ch != 10);
        if (sang[number]==0)
        {
            printf("khong phai");
        }
        else printf("yessir");
    }while(number != 0);
    */
    int number;
    char buffer;
    while(1){
        //ép nhập số nguyên
        do{
            printf("\nNhap vo di em");
            scanf("%d", &number);
            scanf("%c", &buffer);
            fflush(stdin);//tránh bị trôi lệnh
            if(buffer != 10){
                printf("\nDmm nhap lai so nguyen di: ");
            }//không nên gộp kiểm tra số nguyên tố vào việc kiểm tra số nguyên
        }while(buffer != 10);
        if(number == 0) break;
        //nếu code đến đây thì number đã là số nguyên rồi
        int isPrime = 1;
        if(number >= 2){
            for(int i = 2; i <= number - 1; i++){
                if(number % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            printf(isPrime ? "\nNo la so nguyen to" : "\nKhong phai so nguyen to");
        }

    }

    return 0;
}
