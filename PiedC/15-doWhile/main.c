#include <stdio.h>
#include <stdlib.h>
//15-doWhile-While
//loop: vòng lặp
//for | do while | while
//for: hỏi - thỏa - làm
//do while: làm xong mới hỏi, đẻ ra để dụ dỗ người khác
// 1 bytes = 8 bit
//Được phục vụ khi không biết số lần lặp là bao nhiêu
// 1 == 1 luôn đúng
int main()
{

    int i = 2;
    /*
    do{
        printf("\nI love u %d", i);
        i++;
    }while(i <= 10);
    */
    /*int a;
    for(;;){
        printf("\nNhap a di: ");
        scanf("%d", &a);
        if(a == 15){
            break;
        }
    }
    */
    /*
    int a;
    do{
        printf("\nNhap a di: ");
        scanf("%d", &a);
    }while(a != 15);
    */

    int a = 1;
    while(a <= 10){
        printf("\nI love u %d", a);
        a++;
    }

    return 0;
}
