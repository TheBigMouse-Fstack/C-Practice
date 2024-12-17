#include <stdio.h>
#include <stdlib.h>
//26-toUpperCaseV1
//hàm main là hàm dạng int f(void)
void toUpperCaseV1(void);//khai báo hàm
int main()
{   //input
    toUpperCaseV1();//call
    return 0;
}
void toUpperCaseV1(void){//build
    char ch;
    printf("\nNhap ki tu: ");
    scanf("%c", &ch);
    //process
    if(ch >= 97 && ch <= 122){
        ch -= 32;
    }
    //output
    printf("Ket qua la: %c", ch);
}
