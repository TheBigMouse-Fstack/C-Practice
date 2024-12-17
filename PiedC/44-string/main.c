#include <stdio.h>
#include <stdlib.h>
//44-string: chuoi: mang cac ki tu
//trong chuoi, dau \0:null:0 la dau ket thuc chuoi
int stdLen(char str[]);//ham nhan vao 1 con char str
int main()
{
    int arr[100] = {2, 1, 5, 3};
    char str[100] = "hello"; // sau no la so 0, hoac null, hoac \0
    printf("\nChuoi ne: %s", str);

    //vd: ve nhap chuoi
    char sub[100];
    printf("\nNhap sub di: ");
    //scanf("%s", sub); //le diep => le
    gets(sub); //(khong dung cho may mac)//nghien cuu len va size
    //trong C chuoi khong phai la chuoi, chi la 1 mang duoc mo hinh hoa theo chuoi
    //scanf("%[^\n]%*c", sub);//regex (lay rat nhieu ki tu cho den khi gap dau \n
    //fgets(sub, 100, stdin);//du dau \n
    printf("\nSub ne: %s", sub);
    int sizeSub = stdLen(sub);
    printf("\nSize sub ne: %d", sizeSub);
    return 0;
}
int stdLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}








