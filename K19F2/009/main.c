#include <stdio.h>
#include <stdlib.h>
//- Nhập vào n( kiểm tra số nguyên dương từ 0 trở lên, chặn nhập sai), tính n giai thừa ( 3p )

int check(int n);
int main()
{
    int n;
    char a;
    do{
        printf("\ninput n: ");
        scanf("%d", &n);
        scanf("%c", &a);
        fflush(stdin);
        if(a!= 10 || n < 0){
            printf("Nhap sai");
        }
    }while(a!= 10 || n < 0);
    int result = check(n);
    printf('%d', result);
    return 0;
}
int check(int n){
    int mult = 1;
    for(int i = 1 ; i <= n; i++){
        mult *= i;
    }
    return mult;
}
