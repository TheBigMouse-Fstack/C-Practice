#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("\nnhap a: ");
    scanf("%d",&a);
    printf("\nnhap b: ");
    scanf("%d",&b);
    printf("\nnhap c: ");
    scanf("%d",&c);
    if(a + b > c && a + c > b && b + c >a){
        if(a == b || a==c || c == b){
            if(a == b && a == c && b == c){
                printf("\nTam giac deu");
            }else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
                printf("\nTam giac vuong can");
            }else{
                printf("\nTam giac can");
            }
        }else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
                printf("\nTam giac vuong ");
            }else{
                printf("\nTam giac thuong");
            }
    }else{
        printf("\nKhong phai tam giac");
    }
    return 0;
}
