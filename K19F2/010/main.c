#include <stdio.h>
#include <stdlib.h>
//- Nhập vào số nguyên dương n, tính trung bình cộng của các chữ số trong n ( 4p )

float sumaverange ( int n);
int main()
{
    int n;
    char a;
    do{
        printf("\nenter n: ");
        scanf("%d", &n);
        scanf("%c", &a);
        fflush(stdin);
        if(a!=10 || n<0){
            printf("again");
        }
    }while(a!=10 || n<0);
    float result = sumaverange(n);
    printf("%f", result);
    return 0;
}
float sumaverange (int n)
{
    int count = 0;
    int sum = 0;
    while(n>0){
        sum += n %10;
        n = n / 10;
        count++;
    }
    float a = (float)sum / (float)count;
    return a;
}
