#include <stdio.h>
#include <stdlib.h>
//26-toUpperCaseV2
void toUpperCaseV2(char character);//khai báo
int main()
{
    char ch;
    printf("\nNhap ki tu di em: ");
    scanf("%c", &ch);
    //pass by value : truyền tham trị (truyền giá trị để tham khảo)
    toUpperCaseV2(ch);
    //ch sau dòng này không thay đổi giá trị
    return 0;
}
void toUpperCaseV2(char character){//build
    //process
    if(character >= 97 && character <= 122){
        character -= 32;
    }
    //output
    printf("\nKi tu in hoa ne: %c", character);
}
