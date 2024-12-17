#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    printf("\nchon 3 phong bi 1 den 3: ");
    scanf("%d", &n);
    switch(n){
        case 1:
            printf("\n100k");
            break;

        case 2:
            printf("\n200k");
            break;

        case 3:
            printf("\n500k");
            break;

        default:
            printf("\nchon sai mat tien");
    }
	return 0;
}

