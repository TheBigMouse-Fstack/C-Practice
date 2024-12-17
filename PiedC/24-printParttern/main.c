#include <stdio.h>
#include <stdlib.h>
//24-printPattern
/*
nhập vào height và width
in ra màn hình
vd: height = 5, width = 7
*******
*     *
*     *
*     *
*******
*/
int main()
{
    int height, width;
    printf("\nNhap height vo di em iu: ");
    scanf("%d", &height);
    printf("\nNhap width vo di em iu: ");
    scanf("%d", &width);

    for(int h = 1; h <= height; h++){
        for(int w = 1; w <= width; w++){
            if(h == 1 || h == height || w == 1 || w == width){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
