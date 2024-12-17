#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int MAX = 100;
//51-structure: cấu trúc
//primitive datatype: kiểu dữ diệu nguyên thủy
//structure: từ primitive datatype để định nghĩa một kiểu dữ liệu mới
struct Student{
    //id name yob gpa
    char id[10];
    char name[40];
    int yob;
    float gpa;
};
struct Point{
    int x;
    int y;
};
struct Edge{
    struct Point pA;
    struct Point pB;
};

int main()
{
    struct Student stuList[10];
    strcpy(stuList[0].id, "SE001");
    strcpy(stuList[0].name, "Le Diep");
    stuList[0].yob = 1999;
    stuList[0].gpa = 10;

    /*struct Point a;
    a.x = 10;
    a.y = 20;
    printf("\n%d %d", a.x, a.y);
    */
    return 0;
}
