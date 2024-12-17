#include <stdio.h>
#include <stdlib.h>
//Bài 4: Hãy tính tích các chữ số của số nguyên dương n
int multnumber(int n);
int main()
{
    long long n;
    do{
        printf("\nNhap n: ");
        scanf("%d", &n);
        if(n <= 0){
            printf("nhap lai");
        }
    }while( n <= 0);
    int m = multnumber(n);
    printf("%d", m);
    return 0;
}
int multnumber(int n){
    int mult = 1;
    int a;
    while( n != 0){
        a = n%10;
        n = n/10;
        mult *=a;
    }
	return mult;
}

