#include <stdio.h>
#include <stdlib.h>
//16-inputRightForm
//nhập số nguyên đích thực
//nếu người dùng nhập cà chớn, chửi, ép nhập lại

/*
12 oke
17 oke
-21 oke
15a chửi, nhập lại
17.5 chửi, nhập lại
*/
int main()
{
    int number;
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
    printf("\nokeemiu");

    return 0;
}

