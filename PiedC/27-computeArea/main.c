#include <stdio.h>
#include <stdlib.h>
//27-computeArea
/*
viết hàm nhận vào dài rộng
    tính diện tích hình chữ nhật
*/
float computeArea(float width, float height);
int main()
{
    float width, height;
    printf("\nNhap width: ");
    scanf("%f", &width);
    printf("\nNhap height: ");
    scanf("%f", &height);
    float dapan = computeArea(width, height);
    printf("Dap an la: %f", dapan);
    return 0;
}
float computeArea(float width, float height){
    float computeArea = width * height;
    return computeArea;
}
//làm lại bài checkPrime bằng 4 phiên bản khác nhau
//hint return 1 là true return 0 là false
