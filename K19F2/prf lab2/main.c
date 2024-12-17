#include <stdio.h>
#include <stdlib.h>

void inputarray(int array[], int*size,char a);
void outputarray(int array[], int size);
void findmaximummarks( int array[], int size);
void findmarksgreaterthanaverage (int array[], int size,int arrays[],int *sizes);
int insertarray (int array[], int*size, int pos, int key);
int deletearraykey ( int array[], int*size, int key);
void swap(int *xp, int *yp);
void bubbleSort(int arr[], int size);
int main()
{
    int arrmain[100];
    int sizemain;
    char a;
    int arrfindmarks[100] = {1,2,3};
    int sizefindmarks = 3;
    int arrfindmarks1[100] = {1,2,3};
    int sizefindmarks1 = 3;
    int choose;
    int pos;
    int key;
    float d,b;
    inputarray(arrmain,&sizemain,a);
    printf("---------------------------------------------------------------menu---------------------------------------------------");
    printf("\n0. Print out the list");
    printf("\n1. Find maximum marks");
    printf("\n2. Find marks that are greater than or equal to the average of all the marks");
    printf("\n3. Insert a mark into the array");
    printf("\n4. Delete a mark from the array");
    printf("\n5. Sort the array (ascending order)");
    printf("\n6. Input two float numbers a and b (a<b). Show marks that are greater than or equal to a and less than or equal to b.");
    printf("\n7.exit");
    printf("\n-----------------------------------------------------------------------------------------------------------------------");
    while(1){
    do{
    printf("\nChon chuc nang: ");
    scanf("%d",&choose);
    scanf("%c",&a);
    fflush(stdin);
    if(a != 10 || choose < 0){
        printf("\nNhap lai");
    }
    }while(a != 10 || choose < 0);
    switch(choose)
    {
    case 0:{
        printf("mang da nhap: ");
        outputarray(arrmain,sizemain);
        break;
    }
    case 1:{
        findmaximummarks(arrmain,sizemain);
        break;
    }
    case 2:{
        findmarksgreaterthanaverage(arrmain,sizemain,arrfindmarks,&sizefindmarks);
        outputarray(arrfindmarks,sizefindmarks);
        break;
    }
    case 3:{
        do{
        printf("\nNhap vi tri them: ");
        scanf("%d",&pos);
        scanf("%c",&a);
        fflush(stdin);
        if(a != 10 || pos < 0){
            printf("\nNhap lai");
        }
        }while(a != 10 || pos < 0);
        do{
        printf("\nNhap so: ");
        scanf("%d",&key);
        scanf("%c",&a);
        fflush(stdin);
        if(a != 10 || key < 0){
            printf("\nNhap lai");
        }
        }while(a != 10 || key < 0);

        if(insertarray(arrmain,&sizemain,pos,key)){
            printf("\nNhap thanh cong");
        }else{
            printf("\nVi tri ko hop le");
        }
        break;
    }
    case 4:{
        do{
            printf("\nNhap so muon xoa: ");
            scanf("%d",&key);
            scanf("%c",&a);
            fflush(stdin);
            if(a != 10 || key < 0){
                printf("\nNhap lai");
            }
        }while(a != 10 || key < 0);
        if(deletearraykey(arrmain,&sizemain,key)){
            printf("\nThanh cong");
        }else{
            printf("\nKo co co key de xoa");
        }
        break;
    }
    case 5:{
        bubbleSort(arrmain,sizemain);
        printf("\nSort thanh cong");
        break;
    }
    case 6:{
        do{
            printf("\nNhap a: ");
            scanf("%f",&d);
            scanf("%c",&a);
            fflush(stdin);
            if(a != 10 || d < 0){
                printf("\nNhap lai");
            }
        }while(a != 10 || d < 0);
        do{
            printf("\nNhap b: ");
            scanf("%f",&b);
            scanf("%c",&a);
            fflush(stdin);
            if(a != 10 || b < 0 || b < d){
                printf("\nNhap lai");
            }
        }while(a != 10 || b < 0 || b < d);
        ab(arrmain,sizemain,d,b,arrfindmarks,&sizefindmarks,arrfindmarks1,&sizefindmarks1);
        printf("\nso lon hon hoac bang a: ");
        outputarray(arrfindmarks,sizefindmarks);
        printf("\nso be hon hoac bang b: ");
        outputarray(arrfindmarks1,sizefindmarks1);
        break;
    }
    case 7:{
            int opp;
			char opt;
			printf("\nAre you sure?\n");
			printf("1. Yes\n");
			printf("2. No\n");
			printf("Your answer:");
			scanf("%d",&opp);
			scanf("%c",&opt);
			fflush(stdin);
			while (opp !=1 && opp !=2 || opt!=10){
				printf("You have given an answer that does not include above, please enter again:\n");
				printf("Do you want to Countinue?\n");
				printf("1. Yes\n");
				printf("2. No\n");
				scanf("%d",&opp);
				scanf("%c",&opt);
				fflush(stdin);
			}
			if (opp==1 ){
				return 0;
			}
			else if(opp==2){
				return main();
			}
			break;
		}
	}
    }
    return 0;
}
void inputarray(int array[], int*size,char a){
    do{
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    scanf("%c",&a);
    fflush(stdin);
    if(*size < 0 || *size > 100 || a != 10){
        printf("\nNhap lai");
    }
    }while(*size < 0 || *size > 100 || a != 10);
    for(int i = 0 ; i<= *size - 1;i++){
        do{
            printf("\nNhap array[%d]: ",i);
            scanf("%d",&array[i]);
            scanf("%c",&a);
            fflush(stdin);
            if(*size < 0 || *size > 100 || a != 10){
                printf("\nNhap lai");
            }
        }while(*size < 0 || *size > 100 || a != 10);
    }
}
void outputarray(int array[], int size){
    for(int i = 0 ; i<= size -1;i++){
        printf("%4d",array[i]);
    }
    printf("\n");

}
void findmaximummarks( int array[], int size){
    int max = 0;
    for(int i = 0 ; i<= size - 1;i++){
        if(max < array[i]){
            max = array[i];
        }
    }
    printf("MAX:%d",max);
    printf("\n");

}
void findmarksgreaterthanaverage(int array[], int size,int arrays[],int *sizes){
    *sizes = 0;
    int sum;
    for(int i = 0 ; i<= size - 1;i++){
         sum += array[i];
    }
    sum = sum / size;
    for(int i = 0 ; i<= size - 1;i++){
        if(array[i] >= sum){
            arrays[*sizes] = array[i];
            (*sizes)++;
        }
    }
}
int insertarray (int array[], int*size, int pos, int key){
    if(pos > *size || pos < 0) return 0;
    (*size)++;
    for(int i = *size - 1 ; i > pos; i--){
        array[i ] = array[i - 1];
    }
    array[pos]= key;
    return 1;
}
int deletearraykey ( int array[], int*size,int key){
    for(int i = 0 ; i<= *size - 1;i++){
        if(array[i] == key){
            for( int a = i; a < *size - 1;a++){
                array[a] = array[a+1];
            }
        (*size)--;
        return 1;
        }
    }
    return 0;
}
void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int size){
    int i, j;
    for (i = 0; i < size-1; i++)
        for (j = 0; j < size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
}
void ab(int array[], int size, float a , float b, int array1[], int*size1, int array2[], int*size2){
    *size1 = 0;
    *size2 = 0;
    for(int i = 0 ; i<= size - 1 ;i++){
        if(array[i] >= a){
            array1[*size1] = array[i];
            (*size1)++;
        }
        if(array[i] <= b){
            array2[*size2] = array[i];
            (*size2)++;
        }
    }
}
