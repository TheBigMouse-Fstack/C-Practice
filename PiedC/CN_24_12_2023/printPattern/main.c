#include <stdio.h>
#include <stdlib.h>
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
    int h, w;
    printf("\nNhap height di em: ");
    scanf("%d", &h);
    printf("\nNhap width di em: ");
    scanf("%d", &w);
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            if(i == 1 || i == h || j == 1 || j == w){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
