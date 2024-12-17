#include <stdio.h>
#include <stdlib.h>


int main()
{
    int tt = 200;
    int *hari = &tt;
    *hari = *hari - 20;
    printf("\n%d", tt);//200
    printf("\n%u", tt);//200
    printf("\n%d", hari);//6422306
    printf("\n%u", hari);//6422304
    printf("\n%d", *hari);//200
    printf("\n%u", *hari);//200
    return 0;
}
