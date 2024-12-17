#include <stdio.h>
#include <stdlib.h>
// 02-if else
// cấu trúc phân nhánh
int main()
{ /* syntax: cú pháp
  if(conditional){
      command block;
  }else if(conditional){
      command block;
  }
  */
    // a+=2: a được tăng lên 2

    int car = 5;
    printf("\nSai gon");
    printf("\nCao toc lien khuong");
    // biển báo nhắc nhở
    if (car >= 7)
    {
        printf("\nDi pren");
    }
    else if (car == 7)
    {
        printf("\nDi Sacom");
    }
    else
    {
        printf("\nDi Mimosa");
    }
    printf("\nDa lat");

    // nói riêng về điều kiện
    // comparision operator: toán tử điều kiện
    //  == : so sánh bằng
    //  != : không bằng
    //  > < >= <=
    //  mathetic operator: toán tử toán hạng
    //  + - * / % : 7%2 được 1
    // toán tử tăng: increasement operator
    int a = 5;
    a = a + 2; // 7
    a += 2;    // 9
    a = a + 1; // 10
    a += 1;    // 11
    a++;       // 12
    a += 3;    // 15
    a--;       // 14

    // II - logical operator: toán tử logic
    // muốn đi bar thì cần gì
    // tuổi từ 18 trở lên
    // money trên 300
    /*
    if(age >= 18){
        if(money > 300){
            printf("\nWelcome");
        }else{
        printf("\nCut");
        }
    }else{
        printf("\nCut");
    }
    */
    // logical:
    // And &&        Or ||
    int age = 25;
    int money = 10;

    if (age > 18 && money > 300)
    {
        printf("\nWelcome");
    }
    else
    {
        printf("\nCut");
    }
    //&&: tìm mệnh đề False, thấy False cả mệnh đề False
    //||: tìm mệnh đề True,  thấy True cả mệnh đề True

    a = 9;
    int b = 0;
    // Khi chạy mệnh đề ra False a=9 b=1 do đã đọc dòng b++ > 2
    // Khi chạy mệnh đề ra True a=10 b=0 do khi đọc mệnh đề 1 và bỏ qua mệnh đề 2
    //| : toán tử "ngu" vì nó chạy hết cả 2 mệnh đề, khác với || ngưng khi tìm được True
    //& : toán tử "ngu" vì nó chạy hết cả 2 mệnh đề, khác với && ngưng khi tìm được False
    if (a == 10 && b++ > 2)
    {
        printf("\nTrue a = %d , b = %d", a, b);
    }
    else
    {
        printf("\nFalse a = %d , b = %d", a, b);
    }
    return 0;
}
