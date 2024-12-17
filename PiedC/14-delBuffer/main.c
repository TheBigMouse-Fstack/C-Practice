#include <stdio.h>
#include <stdlib.h>
//14-delBuffer
int main()
{
    int age;
    char firstCharOfName;
    printf("\nNhap tuoi di: ");
    scanf("%d", &age);
    /*
    fflush(stdin);// xóa buffer
    */

    printf("\nNhap ten di: ");
    scanf("%char", &firstCharOfName);

    printf("\nTuoi ne: %d", age);
    printf("\nTen ne: %c", firstCharOfName);
    return 0;
}
