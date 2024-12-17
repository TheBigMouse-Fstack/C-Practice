#include <stdio.h>
#include <stdlib.h>
//26-toUpperCaseV4
char toUpperCaseV4(char character);
int main()
{
    char ch;
    printf("\nNhap gia tri di em: ");
    scanf("%c", &ch);
    ch = toUpperCaseV4(ch);
    printf("\nKi tu la %c", ch);
    return 0;
}
char toUpperCaseV4(char character){
    if(character >= 97 && character <= 122){
        character -= 32;
    }
    return character;
}
