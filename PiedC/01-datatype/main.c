#include <stdio.h>
#include <stdlib.h>
// comment: ghi chu

/*
cntt: xu ly thong tin bang cong nghe
Luu tru -> tinh toan -> bao cao (report)
Luu tru
datatype: kieu du lieu

ky tu:     char    (character)  1byte 'a', '2', 'diep'->'p'
so nguyen: int     (integer)    4byte  9, 1999, 17.9 -> 17
so thuc:   float   (float)      4byte  9, 1999, 17.9 -> 17.9
so thuc:   double  (long float) 8byte  12123333333441,91232313

C: ngon ngu huong thu tuc| tuan tu
    procedure: tuan tu    sequence: dong chay
*/
// main: dau nhac he args
int main()
{
    // decimal: %d%
    // pointer: %p%
    // luu tru
    // luu ki tu dau tien trong ten cua minh
    //  1. xac dinh kieu du lieu: char
    //  2. xac dinh ten cho bien: dat ten co nghia
    //           camelCase: quy tac con lac da
    //           khong ky tu dac biet (tru $ _)
    //           so khong nam o dau
    //           ten phai la danh tu
    //           = phep gan: 'assignment'
    // tao cai bien de hung
    char firstCharOfName = 'd';
    // luu tuoi cua minh di
    int age = 18;
    // luu diem toan
    float point = 8.4;
    double score = 8.4;

    // in ra man hinh
    // print format: in theo dinh dang, in theo chuan
    printf("Anh Diep dep trai");
    // in ra ki tu dau tien trong ten cua em
    printf("\nKy tu dau tien la %c", firstCharOfName);
    // in ra tuoi cua minh di
    printf("\nTuoi ne %i", age); //%i: integer
    printf("\nTuoi ne %d", age); //%d: decimal
    // in ra diem di: gia tri cua point
    printf("\nDiem ne %.2f", point);
    // in ra diem score: kieu double
    printf("\nScore ne %.1lf", score); // double: long float
    // in ra dia chi cua bien age
    printf("\nDia chi age la %u", &age); // u: unsigned int

    // ngoai le
    int number = 'A';
    char ch = 66;
    printf("\nNumber ne %c", number); // 65 - 'A'
    printf("\nCh ne %c", ch + 32);    // 66 - 'B'
    // null: biet kieu nhung chua biet cu the gia tri
    // void: khong co gi
    // khoang cach giua chu thuong va chu hoa cach nhau 32 ky tu
    // nho hoc ASCII
    // hard code: code cung: dung o thoi diem hien tai nhung sai o tuong lai
    // tu duy lap trinh
    // tinh tong | thuong cua 2 bien so nguyen
    int numb1 = 10;
    int numb2 = 3;
    float result = (float)numb1 / numb2; // ep kieu
    printf("\n%d / %d = %.3f", numb1, numb2, result);

    // swap: hoan vi
    // hoan vi gia tri ben trong cua 2 bien so nguyen
    int number1 = 15;
    int sting = 10;

    // c1:
    // int tmp = sting;
    // sting = number1;
    // number1 = tmp;

    // c2:
    sting = sting + number1;
    number1 = sting - number1;
    sting = sting - number1;

    printf("\nNumber1 = %d, sting = %d", number1, sting);
    return 0;
}
// return 0; tra 0 ra cho window
// window nhan dc 0 thi biet chuong trinh ket thuc
