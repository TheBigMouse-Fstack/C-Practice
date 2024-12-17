#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char a;
    printf("nhap: ");
    scanf("%d", &n);
    scanf("%c", &a);
    fflush(stdin);
    printf("%d",n);
    printf("\n%d", a);
    if(a == 10){
        printf("\nhello");
    }
    return 0;
}
