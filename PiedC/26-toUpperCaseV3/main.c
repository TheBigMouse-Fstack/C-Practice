#include <stdio.h>
#include <stdlib.h>
//26-toUpperCaseV3
char toUpperCaseV3(void);
int main()
{
    char ch = toUpperCaseV3();//call
    printf("\nKy tu thu duoc la %c", ch);
    return 0;
}
char toUpperCaseV3(void){
    //input
    char character;
    printf("\nNhap ky tu di: ");
    scanf("%c", &character);
    fflush(stdin);
    //process
    if(character >= 97 && character <= 122){
        character -= 32;
    }
    //trả về giá trị
    //window: dòng return sẽ trả về dòng công thức giá trị gần nhất
    return character;
}
