#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    for(n = 1 ; i <= 9; n++){
        for(i = 1; i <= 9 ; i++){
            int result = n * i;
            printf("%d * %d = %d\n",n,i,result);
        }
    }
    return 0;
}
