#include <stdio.h>
#include <stdlib.h>
//- Nhập vào start và end, in ra màn hình các số chẵn trong đoạn từ start đến end ( 3p )

void even(int start , int end);
int main()
{
    int start , end;
    printf("\ninput start: ");
    scanf("\%d", &start);
    printf("\ninput end: ");
    scanf("%d", &end);
    even(start , end);
    return 0;
}
void even(int start , int end){
    if(start > end){
        int tmp = start;
        start =end;
        end = tmp;
    }
    for(int n = start ; n <= end; n++){
        if(n%2 == 0){
            printf("%3d", n);
        }
    }
}
