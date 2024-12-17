#include <stdio.h>
#include <stdlib.h>
/* viết hàm nhờ người dùng nhập vào 1 số                 // kiem tra xem = int
kiểm tra xem số đó có phải là số chẵn không ?
nếu là chẵn thì ném ra 1, không thì phải ném ra 0 */
int evenodd ( void);
int main()
{
    printf("\nKet qua la %d", evenodd());
    return 0;
}
int evenodd ( void){
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);

    return n % 2 == 0;
}
