#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start;
    int end;
    int sum = 0;
    int dem = 0;
    int demchan = 0;
    printf("Nhap start di em: ");
    scanf("%d", &start);
    printf("Nhap end di em: ");
    scanf("%d", &end);
    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    printf("Nhung so chan trong doan la:");
    for(int i = start; i <= end; ++i){
        dem += 1;
        if(i % 2 == 0){
            demchan += 1;
            printf(" %d ", i);
        }else{
            sum += i;
        }
    }
    printf("\nTong cua nhung so le trong doan la: %d ", sum);
    printf("\nSo phan tu cua day la:%d ", dem);
    printf("\nSo phan tu la so chan trong day la:%d ", demchan);
    return 0;
}

