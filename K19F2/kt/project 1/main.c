#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nnhap n: ");
    scanf("%d",&n);
    float sum = 0;
    int i = 0;
    while(i<=n){
        sum += (1.0/(float)i);
        i++;
    }
    printf("%f",sum);
    return 0;
}
