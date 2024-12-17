#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s = 0;
    int h = 0;
    int m = 0;
    printf("\nNhap so s can quy doi: ");
    scanf("%d", &s);//4700

    h = s / 3600; //h = 1
    s = s % 3600; //s = 1100
    m = s / 60; //m = 18
    s = s % 60; //s = 20

    printf("\n%02d:%02d:%02d", h, m, s);

    return 0;
}
