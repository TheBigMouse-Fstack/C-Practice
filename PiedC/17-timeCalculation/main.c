#include <stdio.h>
#include <stdlib.h>

int main()
{
    //3601
    //01:00:01
    int a;
    int hour;
    int minute;
    hour = 0;
    minute = 0;
    printf("\nNhap giay vo di em: ");
    scanf("%d", &a);
    if(a >= 0){
        /*
        while(a >= 3600){
            a -= 3600;
            hour += 1;
        }
        while(a >= 60){
            a -= 60;
            minute += 1;
        }
        */
        hour = a / 3600;
        minute = (a % 3600) / 60;
        a = (a % 3600) % 60;
    }
    printf("May da nhap thoi gian la: %.2d:%.2d:%.2d", hour, minute, a);
    return 0;
}
