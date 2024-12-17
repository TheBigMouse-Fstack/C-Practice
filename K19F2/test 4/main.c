#include <stdio.h>
#include <stdlib.h>
float sumnumber(int n);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d",&n);
    printf("%f",sumnumber(n));
    return 0;
}
float sumnumber(int n){
    int sum = 0;
    float result = 0;
    if(n <= 0){
        return -1;
    }else{
        for(int i = 1 ; i <= n ; i++){
            sum += i;
            result += 1.0/(float)sum;
        }

    }
    return result;
}
