#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char a;
    printf("\nnhap: ");
    scanf("%d", &n);
    scanf("%c", &a);
    fflush(stdin);
    printf("%d", n);
    printf("\n%d", a);
    return 0;
}
