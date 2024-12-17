#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char a;
    do{
    printf("\nNhap n: ");
    scanf("%d",&n);
    scanf("%c",&a);
    fflush(stdin);
    printf("\n%d",a);
    printf("\n%d",n);
    if(n < 0 || a != 10){
        printf("\nsai roi");
    }
    }while(n < 0 || a != 10);
    return 0;
}
