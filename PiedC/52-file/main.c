#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//52-file

int main()
{
    char c[100000];
    FILE *fptr = fopen("C:/CPied/52-file/demoFile.txt", "r+");
    if(fptr == NULL){
        printf("\nFile bi loi roi!");
        return 0;
    }
    //nếu có file thì scan hết giá trị trong file vào biến C
    fscanf(fptr, "%[^\0]", c);
    fclose(fptr);
    printf("\n%s", c);

    //ghi file
    fptr = fopen("C:/CPied/52-file/demoFile.txt", "r+");
    if(fptr == NULL){
        printf("\nFile bi loi roi!");
        return 0;
    }
    strcat(c, "\nahihi do cho");
    fprintf(fptr, c);
    fclose(fptr);
    return 0;
}
/*
r: read only
r+: đọc và ghi lại
w: đọc file đã có rồi | tạo file chưa có
w+: đọc file đã có rồi | tạo file chưa có | ghi đè file đã có
*/
