#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a = 2, b = 0, c = 1;
    if(a <= b){
        int tmp1 = a;
        a = b;
        b = tmp1;
    }else if(a <= c){
        int tmp = a;
        a = c;
        c = tmp;
    }

    if(b <= c){
        int tmp = b;
        b = c;
        c = tmp;
    }
    printf("%d%d%d", a, b, c);
    return 0;
}

